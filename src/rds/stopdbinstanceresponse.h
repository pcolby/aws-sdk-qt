// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDBINSTANCERESPONSE_H
#define QTAWS_STOPDBINSTANCERESPONSE_H

#include "rdsresponse.h"
#include "stopdbinstancerequest.h"

namespace QtAws {
namespace Rds {

class StopDBInstanceResponsePrivate;

class QTAWSRDS_EXPORT StopDBInstanceResponse : public RdsResponse {
    Q_OBJECT

public:
    StopDBInstanceResponse(const StopDBInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopDBInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopDBInstanceResponse)
    Q_DISABLE_COPY(StopDBInstanceResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
