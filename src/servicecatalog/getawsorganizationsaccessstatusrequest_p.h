// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAWSORGANIZATIONSACCESSSTATUSREQUEST_P_H
#define QTAWS_GETAWSORGANIZATIONSACCESSSTATUSREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "getawsorganizationsaccessstatusrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class GetAWSOrganizationsAccessStatusRequest;

class GetAWSOrganizationsAccessStatusRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    GetAWSOrganizationsAccessStatusRequestPrivate(const ServiceCatalogRequest::Action action,
                                   GetAWSOrganizationsAccessStatusRequest * const q);
    GetAWSOrganizationsAccessStatusRequestPrivate(const GetAWSOrganizationsAccessStatusRequestPrivate &other,
                                   GetAWSOrganizationsAccessStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAWSOrganizationsAccessStatusRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
