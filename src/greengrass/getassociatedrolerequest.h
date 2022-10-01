// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSOCIATEDROLEREQUEST_H
#define QTAWS_GETASSOCIATEDROLEREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class GetAssociatedRoleRequestPrivate;

class QTAWSGREENGRASS_EXPORT GetAssociatedRoleRequest : public GreengrassRequest {

public:
    GetAssociatedRoleRequest(const GetAssociatedRoleRequest &other);
    GetAssociatedRoleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAssociatedRoleRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
