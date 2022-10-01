// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREDBCLUSTERTOPOINTINTIMERESPONSE_H
#define QTAWS_RESTOREDBCLUSTERTOPOINTINTIMERESPONSE_H

#include "rdsresponse.h"
#include "restoredbclustertopointintimerequest.h"

namespace QtAws {
namespace Rds {

class RestoreDBClusterToPointInTimeResponsePrivate;

class QTAWSRDS_EXPORT RestoreDBClusterToPointInTimeResponse : public RdsResponse {
    Q_OBJECT

public:
    RestoreDBClusterToPointInTimeResponse(const RestoreDBClusterToPointInTimeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RestoreDBClusterToPointInTimeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreDBClusterToPointInTimeResponse)
    Q_DISABLE_COPY(RestoreDBClusterToPointInTimeResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
