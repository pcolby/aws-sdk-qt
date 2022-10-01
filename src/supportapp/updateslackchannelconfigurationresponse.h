// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESLACKCHANNELCONFIGURATIONRESPONSE_H
#define QTAWS_UPDATESLACKCHANNELCONFIGURATIONRESPONSE_H

#include "supportappresponse.h"
#include "updateslackchannelconfigurationrequest.h"

namespace QtAws {
namespace SupportApp {

class UpdateSlackChannelConfigurationResponsePrivate;

class QTAWSSUPPORTAPP_EXPORT UpdateSlackChannelConfigurationResponse : public SupportAppResponse {
    Q_OBJECT

public:
    UpdateSlackChannelConfigurationResponse(const UpdateSlackChannelConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSlackChannelConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSlackChannelConfigurationResponse)
    Q_DISABLE_COPY(UpdateSlackChannelConfigurationResponse)

};

} // namespace SupportApp
} // namespace QtAws

#endif
