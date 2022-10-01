// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICEACCESSPOLICIESREQUEST_H
#define QTAWS_UPDATESERVICEACCESSPOLICIESREQUEST_H

#include "cloudsearchrequest.h"

namespace QtAws {
namespace CloudSearch {

class UpdateServiceAccessPoliciesRequestPrivate;

class QTAWSCLOUDSEARCH_EXPORT UpdateServiceAccessPoliciesRequest : public CloudSearchRequest {

public:
    UpdateServiceAccessPoliciesRequest(const UpdateServiceAccessPoliciesRequest &other);
    UpdateServiceAccessPoliciesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateServiceAccessPoliciesRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
