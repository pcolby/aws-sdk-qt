// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEAWSORGANIZATIONSACCESSREQUEST_P_H
#define QTAWS_DISABLEAWSORGANIZATIONSACCESSREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "disableawsorganizationsaccessrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DisableAWSOrganizationsAccessRequest;

class DisableAWSOrganizationsAccessRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    DisableAWSOrganizationsAccessRequestPrivate(const ServiceCatalogRequest::Action action,
                                   DisableAWSOrganizationsAccessRequest * const q);
    DisableAWSOrganizationsAccessRequestPrivate(const DisableAWSOrganizationsAccessRequestPrivate &other,
                                   DisableAWSOrganizationsAccessRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableAWSOrganizationsAccessRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
