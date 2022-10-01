// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPINSTANCEUSERENDPOINTSREQUEST_H
#define QTAWS_LISTAPPINSTANCEUSERENDPOINTSREQUEST_H

#include "chimesdkidentityrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class ListAppInstanceUserEndpointsRequestPrivate;

class QTAWSCHIMESDKIDENTITY_EXPORT ListAppInstanceUserEndpointsRequest : public ChimeSdkIdentityRequest {

public:
    ListAppInstanceUserEndpointsRequest(const ListAppInstanceUserEndpointsRequest &other);
    ListAppInstanceUserEndpointsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAppInstanceUserEndpointsRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
