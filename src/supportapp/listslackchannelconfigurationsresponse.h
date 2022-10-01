// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSLACKCHANNELCONFIGURATIONSRESPONSE_H
#define QTAWS_LISTSLACKCHANNELCONFIGURATIONSRESPONSE_H

#include "supportappresponse.h"
#include "listslackchannelconfigurationsrequest.h"

namespace QtAws {
namespace SupportApp {

class ListSlackChannelConfigurationsResponsePrivate;

class QTAWSSUPPORTAPP_EXPORT ListSlackChannelConfigurationsResponse : public SupportAppResponse {
    Q_OBJECT

public:
    ListSlackChannelConfigurationsResponse(const ListSlackChannelConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSlackChannelConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSlackChannelConfigurationsResponse)
    Q_DISABLE_COPY(ListSlackChannelConfigurationsResponse)

};

} // namespace SupportApp
} // namespace QtAws

#endif
