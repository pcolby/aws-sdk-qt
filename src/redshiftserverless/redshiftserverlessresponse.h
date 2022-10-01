// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REDSHIFTSERVERLESSRESPONSE_H
#define QTAWS_REDSHIFTSERVERLESSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsredshiftserverlessglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace RedshiftServerless {

class RedshiftServerlessResponsePrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT RedshiftServerlessResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    RedshiftServerlessResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    RedshiftServerlessResponse(RedshiftServerlessResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RedshiftServerlessResponse)
    Q_DISABLE_COPY(RedshiftServerlessResponse)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
