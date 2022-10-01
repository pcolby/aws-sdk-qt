// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENTITIESFORPOLICYREQUEST_H
#define QTAWS_LISTENTITIESFORPOLICYREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class ListEntitiesForPolicyRequestPrivate;

class QTAWSIAM_EXPORT ListEntitiesForPolicyRequest : public IamRequest {

public:
    ListEntitiesForPolicyRequest(const ListEntitiesForPolicyRequest &other);
    ListEntitiesForPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEntitiesForPolicyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
