// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTACHEDROLEPOLICIESREQUEST_H
#define QTAWS_LISTATTACHEDROLEPOLICIESREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class ListAttachedRolePoliciesRequestPrivate;

class QTAWSIAM_EXPORT ListAttachedRolePoliciesRequest : public IamRequest {

public:
    ListAttachedRolePoliciesRequest(const ListAttachedRolePoliciesRequest &other);
    ListAttachedRolePoliciesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAttachedRolePoliciesRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
