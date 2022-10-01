// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPINSTANCESREQUEST_H
#define QTAWS_LISTAPPINSTANCESREQUEST_H

#include "chimesdkidentityrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class ListAppInstancesRequestPrivate;

class QTAWSCHIMESDKIDENTITY_EXPORT ListAppInstancesRequest : public ChimeSdkIdentityRequest {

public:
    ListAppInstancesRequest(const ListAppInstancesRequest &other);
    ListAppInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAppInstancesRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
