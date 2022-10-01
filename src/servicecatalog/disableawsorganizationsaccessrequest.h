// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEAWSORGANIZATIONSACCESSREQUEST_H
#define QTAWS_DISABLEAWSORGANIZATIONSACCESSREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DisableAWSOrganizationsAccessRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT DisableAWSOrganizationsAccessRequest : public ServiceCatalogRequest {

public:
    DisableAWSOrganizationsAccessRequest(const DisableAWSOrganizationsAccessRequest &other);
    DisableAWSOrganizationsAccessRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableAWSOrganizationsAccessRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
