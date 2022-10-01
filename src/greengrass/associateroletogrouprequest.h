// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEROLETOGROUPREQUEST_H
#define QTAWS_ASSOCIATEROLETOGROUPREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class AssociateRoleToGroupRequestPrivate;

class QTAWSGREENGRASS_EXPORT AssociateRoleToGroupRequest : public GreengrassRequest {

public:
    AssociateRoleToGroupRequest(const AssociateRoleToGroupRequest &other);
    AssociateRoleToGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateRoleToGroupRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
