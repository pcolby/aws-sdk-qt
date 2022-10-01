// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAWSORGANIZATIONSACCESSSTATUSREQUEST_H
#define QTAWS_GETAWSORGANIZATIONSACCESSSTATUSREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class GetAWSOrganizationsAccessStatusRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT GetAWSOrganizationsAccessStatusRequest : public ServiceCatalogRequest {

public:
    GetAWSOrganizationsAccessStatusRequest(const GetAWSOrganizationsAccessStatusRequest &other);
    GetAWSOrganizationsAccessStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAWSOrganizationsAccessStatusRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
