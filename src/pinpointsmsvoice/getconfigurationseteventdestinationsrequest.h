// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFIGURATIONSETEVENTDESTINATIONSREQUEST_H
#define QTAWS_GETCONFIGURATIONSETEVENTDESTINATIONSREQUEST_H

#include "pinpointsmsvoicerequest.h"

namespace QtAws {
namespace PinpointSmsVoice {

class GetConfigurationSetEventDestinationsRequestPrivate;

class QTAWSPINPOINTSMSVOICE_EXPORT GetConfigurationSetEventDestinationsRequest : public PinpointSmsVoiceRequest {

public:
    GetConfigurationSetEventDestinationsRequest(const GetConfigurationSetEventDestinationsRequest &other);
    GetConfigurationSetEventDestinationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConfigurationSetEventDestinationsRequest)

};

} // namespace PinpointSmsVoice
} // namespace QtAws

#endif
