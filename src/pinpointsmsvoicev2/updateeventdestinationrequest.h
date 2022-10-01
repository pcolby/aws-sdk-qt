// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEVENTDESTINATIONREQUEST_H
#define QTAWS_UPDATEEVENTDESTINATIONREQUEST_H

#include "pinpointsmsvoicev2request.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class UpdateEventDestinationRequestPrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT UpdateEventDestinationRequest : public PinpointSmsVoiceV2Request {

public:
    UpdateEventDestinationRequest(const UpdateEventDestinationRequest &other);
    UpdateEventDestinationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEventDestinationRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
