// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBPROXYTARGETGROUPRESPONSE_H
#define QTAWS_MODIFYDBPROXYTARGETGROUPRESPONSE_H

#include "rdsresponse.h"
#include "modifydbproxytargetgrouprequest.h"

namespace QtAws {
namespace Rds {

class ModifyDBProxyTargetGroupResponsePrivate;

class QTAWSRDS_EXPORT ModifyDBProxyTargetGroupResponse : public RdsResponse {
    Q_OBJECT

public:
    ModifyDBProxyTargetGroupResponse(const ModifyDBProxyTargetGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyDBProxyTargetGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyDBProxyTargetGroupResponse)
    Q_DISABLE_COPY(ModifyDBProxyTargetGroupResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
