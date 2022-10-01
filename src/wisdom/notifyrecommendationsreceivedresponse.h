// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NOTIFYRECOMMENDATIONSRECEIVEDRESPONSE_H
#define QTAWS_NOTIFYRECOMMENDATIONSRECEIVEDRESPONSE_H

#include "wisdomresponse.h"
#include "notifyrecommendationsreceivedrequest.h"

namespace QtAws {
namespace Wisdom {

class NotifyRecommendationsReceivedResponsePrivate;

class QTAWSWISDOM_EXPORT NotifyRecommendationsReceivedResponse : public WisdomResponse {
    Q_OBJECT

public:
    NotifyRecommendationsReceivedResponse(const NotifyRecommendationsReceivedRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const NotifyRecommendationsReceivedRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(NotifyRecommendationsReceivedResponse)
    Q_DISABLE_COPY(NotifyRecommendationsReceivedResponse)

};

} // namespace Wisdom
} // namespace QtAws

#endif
