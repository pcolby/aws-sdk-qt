// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESLACKCHANNELCONFIGURATIONREQUEST_H
#define QTAWS_UPDATESLACKCHANNELCONFIGURATIONREQUEST_H

#include "supportapprequest.h"

namespace QtAws {
namespace SupportApp {

class UpdateSlackChannelConfigurationRequestPrivate;

class QTAWSSUPPORTAPP_EXPORT UpdateSlackChannelConfigurationRequest : public SupportAppRequest {

public:
    UpdateSlackChannelConfigurationRequest(const UpdateSlackChannelConfigurationRequest &other);
    UpdateSlackChannelConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSlackChannelConfigurationRequest)

};

} // namespace SupportApp
} // namespace QtAws

#endif
