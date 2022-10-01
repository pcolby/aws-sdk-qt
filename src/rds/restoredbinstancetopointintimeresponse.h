// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREDBINSTANCETOPOINTINTIMERESPONSE_H
#define QTAWS_RESTOREDBINSTANCETOPOINTINTIMERESPONSE_H

#include "rdsresponse.h"
#include "restoredbinstancetopointintimerequest.h"

namespace QtAws {
namespace Rds {

class RestoreDBInstanceToPointInTimeResponsePrivate;

class QTAWSRDS_EXPORT RestoreDBInstanceToPointInTimeResponse : public RdsResponse {
    Q_OBJECT

public:
    RestoreDBInstanceToPointInTimeResponse(const RestoreDBInstanceToPointInTimeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RestoreDBInstanceToPointInTimeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreDBInstanceToPointInTimeResponse)
    Q_DISABLE_COPY(RestoreDBInstanceToPointInTimeResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
