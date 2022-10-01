// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERPOLICIESREQUEST_H
#define QTAWS_LISTUSERPOLICIESREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class ListUserPoliciesRequestPrivate;

class QTAWSIAM_EXPORT ListUserPoliciesRequest : public IamRequest {

public:
    ListUserPoliciesRequest(const ListUserPoliciesRequest &other);
    ListUserPoliciesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUserPoliciesRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
