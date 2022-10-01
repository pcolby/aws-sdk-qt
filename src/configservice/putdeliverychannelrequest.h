// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDELIVERYCHANNELREQUEST_H
#define QTAWS_PUTDELIVERYCHANNELREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class PutDeliveryChannelRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT PutDeliveryChannelRequest : public ConfigServiceRequest {

public:
    PutDeliveryChannelRequest(const PutDeliveryChannelRequest &other);
    PutDeliveryChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutDeliveryChannelRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
