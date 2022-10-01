// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDELIVERYCHANNELREQUEST_H
#define QTAWS_DELETEDELIVERYCHANNELREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteDeliveryChannelRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DeleteDeliveryChannelRequest : public ConfigServiceRequest {

public:
    DeleteDeliveryChannelRequest(const DeleteDeliveryChannelRequest &other);
    DeleteDeliveryChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDeliveryChannelRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
