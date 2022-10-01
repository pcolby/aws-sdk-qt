// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFIGURATIONSETREQUEST_H
#define QTAWS_GETCONFIGURATIONSETREQUEST_H

#include "pinpointemailrequest.h"

namespace QtAws {
namespace PinpointEmail {

class GetConfigurationSetRequestPrivate;

class QTAWSPINPOINTEMAIL_EXPORT GetConfigurationSetRequest : public PinpointEmailRequest {

public:
    GetConfigurationSetRequest(const GetConfigurationSetRequest &other);
    GetConfigurationSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConfigurationSetRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
