// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGURATIONSETEVENTDESTINATIONREQUEST_H
#define QTAWS_UPDATECONFIGURATIONSETEVENTDESTINATIONREQUEST_H

#include "pinpointsmsvoicerequest.h"

namespace QtAws {
namespace PinpointSmsVoice {

class UpdateConfigurationSetEventDestinationRequestPrivate;

class QTAWSPINPOINTSMSVOICE_EXPORT UpdateConfigurationSetEventDestinationRequest : public PinpointSmsVoiceRequest {

public:
    UpdateConfigurationSetEventDestinationRequest(const UpdateConfigurationSetEventDestinationRequest &other);
    UpdateConfigurationSetEventDestinationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConfigurationSetEventDestinationRequest)

};

} // namespace PinpointSmsVoice
} // namespace QtAws

#endif
