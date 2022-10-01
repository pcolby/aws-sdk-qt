// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFIGURATIONSETEVENTDESTINATIONSREQUEST_H
#define QTAWS_GETCONFIGURATIONSETEVENTDESTINATIONSREQUEST_H

#include "pinpointemailrequest.h"

namespace QtAws {
namespace PinpointEmail {

class GetConfigurationSetEventDestinationsRequestPrivate;

class QTAWSPINPOINTEMAIL_EXPORT GetConfigurationSetEventDestinationsRequest : public PinpointEmailRequest {

public:
    GetConfigurationSetEventDestinationsRequest(const GetConfigurationSetEventDestinationsRequest &other);
    GetConfigurationSetEventDestinationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConfigurationSetEventDestinationsRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
