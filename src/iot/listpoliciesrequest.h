// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOLICIESREQUEST_H
#define QTAWS_LISTPOLICIESREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListPoliciesRequestPrivate;

class QTAWSIOT_EXPORT ListPoliciesRequest : public IoTRequest {

public:
    ListPoliciesRequest(const ListPoliciesRequest &other);
    ListPoliciesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPoliciesRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
