// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREDBCLUSTERFROMS3RESPONSE_H
#define QTAWS_RESTOREDBCLUSTERFROMS3RESPONSE_H

#include "rdsresponse.h"
#include "restoredbclusterfroms3request.h"

namespace QtAws {
namespace Rds {

class RestoreDBClusterFromS3ResponsePrivate;

class QTAWSRDS_EXPORT RestoreDBClusterFromS3Response : public RdsResponse {
    Q_OBJECT

public:
    RestoreDBClusterFromS3Response(const RestoreDBClusterFromS3Request &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RestoreDBClusterFromS3Request * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreDBClusterFromS3Response)
    Q_DISABLE_COPY(RestoreDBClusterFromS3Response)

};

} // namespace Rds
} // namespace QtAws

#endif
