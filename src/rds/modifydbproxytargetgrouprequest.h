// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBPROXYTARGETGROUPREQUEST_H
#define QTAWS_MODIFYDBPROXYTARGETGROUPREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class ModifyDBProxyTargetGroupRequestPrivate;

class QTAWSRDS_EXPORT ModifyDBProxyTargetGroupRequest : public RdsRequest {

public:
    ModifyDBProxyTargetGroupRequest(const ModifyDBProxyTargetGroupRequest &other);
    ModifyDBProxyTargetGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyDBProxyTargetGroupRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
