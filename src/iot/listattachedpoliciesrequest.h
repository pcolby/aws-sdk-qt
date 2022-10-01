// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTACHEDPOLICIESREQUEST_H
#define QTAWS_LISTATTACHEDPOLICIESREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListAttachedPoliciesRequestPrivate;

class QTAWSIOT_EXPORT ListAttachedPoliciesRequest : public IoTRequest {

public:
    ListAttachedPoliciesRequest(const ListAttachedPoliciesRequest &other);
    ListAttachedPoliciesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAttachedPoliciesRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
