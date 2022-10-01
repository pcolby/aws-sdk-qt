// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOLICIESGRANTINGSERVICEACCESSREQUEST_H
#define QTAWS_LISTPOLICIESGRANTINGSERVICEACCESSREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class ListPoliciesGrantingServiceAccessRequestPrivate;

class QTAWSIAM_EXPORT ListPoliciesGrantingServiceAccessRequest : public IamRequest {

public:
    ListPoliciesGrantingServiceAccessRequest(const ListPoliciesGrantingServiceAccessRequest &other);
    ListPoliciesGrantingServiceAccessRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPoliciesGrantingServiceAccessRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
