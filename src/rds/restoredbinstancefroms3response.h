// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREDBINSTANCEFROMS3RESPONSE_H
#define QTAWS_RESTOREDBINSTANCEFROMS3RESPONSE_H

#include "rdsresponse.h"
#include "restoredbinstancefroms3request.h"

namespace QtAws {
namespace Rds {

class RestoreDBInstanceFromS3ResponsePrivate;

class QTAWSRDS_EXPORT RestoreDBInstanceFromS3Response : public RdsResponse {
    Q_OBJECT

public:
    RestoreDBInstanceFromS3Response(const RestoreDBInstanceFromS3Request &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RestoreDBInstanceFromS3Request * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreDBInstanceFromS3Response)
    Q_DISABLE_COPY(RestoreDBInstanceFromS3Response)

};

} // namespace Rds
} // namespace QtAws

#endif
