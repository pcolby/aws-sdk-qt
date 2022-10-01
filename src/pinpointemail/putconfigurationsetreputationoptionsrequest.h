// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGURATIONSETREPUTATIONOPTIONSREQUEST_H
#define QTAWS_PUTCONFIGURATIONSETREPUTATIONOPTIONSREQUEST_H

#include "pinpointemailrequest.h"

namespace QtAws {
namespace PinpointEmail {

class PutConfigurationSetReputationOptionsRequestPrivate;

class QTAWSPINPOINTEMAIL_EXPORT PutConfigurationSetReputationOptionsRequest : public PinpointEmailRequest {

public:
    PutConfigurationSetReputationOptionsRequest(const PutConfigurationSetReputationOptionsRequest &other);
    PutConfigurationSetReputationOptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutConfigurationSetReputationOptionsRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
