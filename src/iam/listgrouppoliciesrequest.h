// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPPOLICIESREQUEST_H
#define QTAWS_LISTGROUPPOLICIESREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class ListGroupPoliciesRequestPrivate;

class QTAWSIAM_EXPORT ListGroupPoliciesRequest : public IamRequest {

public:
    ListGroupPoliciesRequest(const ListGroupPoliciesRequest &other);
    ListGroupPoliciesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGroupPoliciesRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
