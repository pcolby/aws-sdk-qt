// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAWSSERVICEACCESSFORORGANIZATIONREQUEST_H
#define QTAWS_LISTAWSSERVICEACCESSFORORGANIZATIONREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class ListAWSServiceAccessForOrganizationRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT ListAWSServiceAccessForOrganizationRequest : public OrganizationsRequest {

public:
    ListAWSServiceAccessForOrganizationRequest(const ListAWSServiceAccessForOrganizationRequest &other);
    ListAWSServiceAccessForOrganizationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAWSServiceAccessForOrganizationRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
