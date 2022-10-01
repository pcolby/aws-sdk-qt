// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESERVICEROLETOACCOUNTREQUEST_H
#define QTAWS_ASSOCIATESERVICEROLETOACCOUNTREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class AssociateServiceRoleToAccountRequestPrivate;

class QTAWSGREENGRASS_EXPORT AssociateServiceRoleToAccountRequest : public GreengrassRequest {

public:
    AssociateServiceRoleToAccountRequest(const AssociateServiceRoleToAccountRequest &other);
    AssociateServiceRoleToAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateServiceRoleToAccountRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
