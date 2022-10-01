// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPHONENUMBERCONTACTFLOWREQUEST_H
#define QTAWS_ASSOCIATEPHONENUMBERCONTACTFLOWREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class AssociatePhoneNumberContactFlowRequestPrivate;

class QTAWSCONNECT_EXPORT AssociatePhoneNumberContactFlowRequest : public ConnectRequest {

public:
    AssociatePhoneNumberContactFlowRequest(const AssociatePhoneNumberContactFlowRequest &other);
    AssociatePhoneNumberContactFlowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociatePhoneNumberContactFlowRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
