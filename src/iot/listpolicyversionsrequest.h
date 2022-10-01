// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOLICYVERSIONSREQUEST_H
#define QTAWS_LISTPOLICYVERSIONSREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListPolicyVersionsRequestPrivate;

class QTAWSIOT_EXPORT ListPolicyVersionsRequest : public IoTRequest {

public:
    ListPolicyVersionsRequest(const ListPolicyVersionsRequest &other);
    ListPolicyVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPolicyVersionsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
