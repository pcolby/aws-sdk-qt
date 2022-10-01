// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDBINSTANCERESPONSE_H
#define QTAWS_STARTDBINSTANCERESPONSE_H

#include "rdsresponse.h"
#include "startdbinstancerequest.h"

namespace QtAws {
namespace Rds {

class StartDBInstanceResponsePrivate;

class QTAWSRDS_EXPORT StartDBInstanceResponse : public RdsResponse {
    Q_OBJECT

public:
    StartDBInstanceResponse(const StartDBInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartDBInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartDBInstanceResponse)
    Q_DISABLE_COPY(StartDBInstanceResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
