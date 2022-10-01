// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBSUBNETGROUPREQUEST_H
#define QTAWS_CREATEDBSUBNETGROUPREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class CreateDBSubnetGroupRequestPrivate;

class QTAWSRDS_EXPORT CreateDBSubnetGroupRequest : public RdsRequest {

public:
    CreateDBSubnetGroupRequest(const CreateDBSubnetGroupRequest &other);
    CreateDBSubnetGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDBSubnetGroupRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
