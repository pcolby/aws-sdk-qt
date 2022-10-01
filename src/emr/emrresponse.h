// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EMRRESPONSE_H
#define QTAWS_EMRRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsemrglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Emr {

class EmrResponsePrivate;

class QTAWSEMR_EXPORT EmrResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    EmrResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    EmrResponse(EmrResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EmrResponse)
    Q_DISABLE_COPY(EmrResponse)

};

} // namespace Emr
} // namespace QtAws

#endif
