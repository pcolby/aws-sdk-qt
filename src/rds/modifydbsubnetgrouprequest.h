// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBSUBNETGROUPREQUEST_H
#define QTAWS_MODIFYDBSUBNETGROUPREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class ModifyDBSubnetGroupRequestPrivate;

class QTAWSRDS_EXPORT ModifyDBSubnetGroupRequest : public RdsRequest {

public:
    ModifyDBSubnetGroupRequest(const ModifyDBSubnetGroupRequest &other);
    ModifyDBSubnetGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyDBSubnetGroupRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
