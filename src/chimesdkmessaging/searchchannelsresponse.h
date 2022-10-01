// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHCHANNELSRESPONSE_H
#define QTAWS_SEARCHCHANNELSRESPONSE_H

#include "chimesdkmessagingresponse.h"
#include "searchchannelsrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class SearchChannelsResponsePrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT SearchChannelsResponse : public ChimeSdkMessagingResponse {
    Q_OBJECT

public:
    SearchChannelsResponse(const SearchChannelsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchChannelsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchChannelsResponse)
    Q_DISABLE_COPY(SearchChannelsResponse)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
