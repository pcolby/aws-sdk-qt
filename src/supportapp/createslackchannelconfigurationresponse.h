// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESLACKCHANNELCONFIGURATIONRESPONSE_H
#define QTAWS_CREATESLACKCHANNELCONFIGURATIONRESPONSE_H

#include "supportappresponse.h"
#include "createslackchannelconfigurationrequest.h"

namespace QtAws {
namespace SupportApp {

class CreateSlackChannelConfigurationResponsePrivate;

class QTAWSSUPPORTAPP_EXPORT CreateSlackChannelConfigurationResponse : public SupportAppResponse {
    Q_OBJECT

public:
    CreateSlackChannelConfigurationResponse(const CreateSlackChannelConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSlackChannelConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSlackChannelConfigurationResponse)
    Q_DISABLE_COPY(CreateSlackChannelConfigurationResponse)

};

} // namespace SupportApp
} // namespace QtAws

#endif
