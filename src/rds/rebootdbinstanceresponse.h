// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTDBINSTANCERESPONSE_H
#define QTAWS_REBOOTDBINSTANCERESPONSE_H

#include "rdsresponse.h"
#include "rebootdbinstancerequest.h"

namespace QtAws {
namespace Rds {

class RebootDBInstanceResponsePrivate;

class QTAWSRDS_EXPORT RebootDBInstanceResponse : public RdsResponse {
    Q_OBJECT

public:
    RebootDBInstanceResponse(const RebootDBInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RebootDBInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RebootDBInstanceResponse)
    Q_DISABLE_COPY(RebootDBInstanceResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
