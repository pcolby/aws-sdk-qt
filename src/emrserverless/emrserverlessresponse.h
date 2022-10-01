// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EMRSERVERLESSRESPONSE_H
#define QTAWS_EMRSERVERLESSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsemrserverlessglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace EmrServerless {

class EmrServerlessResponsePrivate;

class QTAWSEMRSERVERLESS_EXPORT EmrServerlessResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    EmrServerlessResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    EmrServerlessResponse(EmrServerlessResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EmrServerlessResponse)
    Q_DISABLE_COPY(EmrServerlessResponse)

};

} // namespace EmrServerless
} // namespace QtAws

#endif
