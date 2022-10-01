// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSLACKCHANNELCONFIGURATIONSREQUEST_H
#define QTAWS_LISTSLACKCHANNELCONFIGURATIONSREQUEST_H

#include "supportapprequest.h"

namespace QtAws {
namespace SupportApp {

class ListSlackChannelConfigurationsRequestPrivate;

class QTAWSSUPPORTAPP_EXPORT ListSlackChannelConfigurationsRequest : public SupportAppRequest {

public:
    ListSlackChannelConfigurationsRequest(const ListSlackChannelConfigurationsRequest &other);
    ListSlackChannelConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSlackChannelConfigurationsRequest)

};

} // namespace SupportApp
} // namespace QtAws

#endif
