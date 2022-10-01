// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUBSCRIPTIONSBYTOPICRESPONSE_H
#define QTAWS_LISTSUBSCRIPTIONSBYTOPICRESPONSE_H

#include "snsresponse.h"
#include "listsubscriptionsbytopicrequest.h"

namespace QtAws {
namespace Sns {

class ListSubscriptionsByTopicResponsePrivate;

class QTAWSSNS_EXPORT ListSubscriptionsByTopicResponse : public SnsResponse {
    Q_OBJECT

public:
    ListSubscriptionsByTopicResponse(const ListSubscriptionsByTopicRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSubscriptionsByTopicRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSubscriptionsByTopicResponse)
    Q_DISABLE_COPY(ListSubscriptionsByTopicResponse)

};

} // namespace Sns
} // namespace QtAws

#endif
