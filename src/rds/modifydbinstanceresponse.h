// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBINSTANCERESPONSE_H
#define QTAWS_MODIFYDBINSTANCERESPONSE_H

#include "rdsresponse.h"
#include "modifydbinstancerequest.h"

namespace QtAws {
namespace Rds {

class ModifyDBInstanceResponsePrivate;

class QTAWSRDS_EXPORT ModifyDBInstanceResponse : public RdsResponse {
    Q_OBJECT

public:
    ModifyDBInstanceResponse(const ModifyDBInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyDBInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyDBInstanceResponse)
    Q_DISABLE_COPY(ModifyDBInstanceResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
