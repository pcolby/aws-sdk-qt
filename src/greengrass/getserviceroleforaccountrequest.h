// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICEROLEFORACCOUNTREQUEST_H
#define QTAWS_GETSERVICEROLEFORACCOUNTREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class GetServiceRoleForAccountRequestPrivate;

class QTAWSGREENGRASS_EXPORT GetServiceRoleForAccountRequest : public GreengrassRequest {

public:
    GetServiceRoleForAccountRequest(const GetServiceRoleForAccountRequest &other);
    GetServiceRoleForAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetServiceRoleForAccountRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
