// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROLEPOLICIESREQUEST_H
#define QTAWS_LISTROLEPOLICIESREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class ListRolePoliciesRequestPrivate;

class QTAWSIAM_EXPORT ListRolePoliciesRequest : public IamRequest {

public:
    ListRolePoliciesRequest(const ListRolePoliciesRequest &other);
    ListRolePoliciesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRolePoliciesRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
