// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PERSONALIZERUNTIMERESPONSE_H
#define QTAWS_PERSONALIZERUNTIMERESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawspersonalizeruntimeglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace PersonalizeRuntime {

class PersonalizeRuntimeResponsePrivate;

class QTAWSPERSONALIZERUNTIME_EXPORT PersonalizeRuntimeResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    PersonalizeRuntimeResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    PersonalizeRuntimeResponse(PersonalizeRuntimeResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PersonalizeRuntimeResponse)
    Q_DISABLE_COPY(PersonalizeRuntimeResponse)

};

} // namespace PersonalizeRuntime
} // namespace QtAws

#endif
