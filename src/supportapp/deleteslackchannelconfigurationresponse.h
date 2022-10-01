// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESLACKCHANNELCONFIGURATIONRESPONSE_H
#define QTAWS_DELETESLACKCHANNELCONFIGURATIONRESPONSE_H

#include "supportappresponse.h"
#include "deleteslackchannelconfigurationrequest.h"

namespace QtAws {
namespace SupportApp {

class DeleteSlackChannelConfigurationResponsePrivate;

class QTAWSSUPPORTAPP_EXPORT DeleteSlackChannelConfigurationResponse : public SupportAppResponse {
    Q_OBJECT

public:
    DeleteSlackChannelConfigurationResponse(const DeleteSlackChannelConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSlackChannelConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSlackChannelConfigurationResponse)
    Q_DISABLE_COPY(DeleteSlackChannelConfigurationResponse)

};

} // namespace SupportApp
} // namespace QtAws

#endif
