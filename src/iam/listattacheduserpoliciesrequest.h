// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTACHEDUSERPOLICIESREQUEST_H
#define QTAWS_LISTATTACHEDUSERPOLICIESREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class ListAttachedUserPoliciesRequestPrivate;

class QTAWSIAM_EXPORT ListAttachedUserPoliciesRequest : public IamRequest {

public:
    ListAttachedUserPoliciesRequest(const ListAttachedUserPoliciesRequest &other);
    ListAttachedUserPoliciesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAttachedUserPoliciesRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
