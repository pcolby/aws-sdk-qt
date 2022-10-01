// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFIGURATIONSETREQUEST_H
#define QTAWS_CREATECONFIGURATIONSETREQUEST_H

#include "pinpointemailrequest.h"

namespace QtAws {
namespace PinpointEmail {

class CreateConfigurationSetRequestPrivate;

class QTAWSPINPOINTEMAIL_EXPORT CreateConfigurationSetRequest : public PinpointEmailRequest {

public:
    CreateConfigurationSetRequest(const CreateConfigurationSetRequest &other);
    CreateConfigurationSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateConfigurationSetRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
