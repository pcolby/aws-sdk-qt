// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEAWSORGANIZATIONSACCESSREQUEST_P_H
#define QTAWS_ENABLEAWSORGANIZATIONSACCESSREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "enableawsorganizationsaccessrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class EnableAWSOrganizationsAccessRequest;

class EnableAWSOrganizationsAccessRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    EnableAWSOrganizationsAccessRequestPrivate(const ServiceCatalogRequest::Action action,
                                   EnableAWSOrganizationsAccessRequest * const q);
    EnableAWSOrganizationsAccessRequestPrivate(const EnableAWSOrganizationsAccessRequestPrivate &other,
                                   EnableAWSOrganizationsAccessRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableAWSOrganizationsAccessRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
