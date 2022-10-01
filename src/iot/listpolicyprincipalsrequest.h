// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOLICYPRINCIPALSREQUEST_H
#define QTAWS_LISTPOLICYPRINCIPALSREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class ListPolicyPrincipalsRequestPrivate;

class QTAWSIOT_EXPORT ListPolicyPrincipalsRequest : public IoTRequest {

public:
    ListPolicyPrincipalsRequest(const ListPolicyPrincipalsRequest &other);
    ListPolicyPrincipalsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPolicyPrincipalsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
