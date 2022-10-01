// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUBSCRIPTIONSRESPONSE_H
#define QTAWS_LISTSUBSCRIPTIONSRESPONSE_H

#include "snsresponse.h"
#include "listsubscriptionsrequest.h"

namespace QtAws {
namespace Sns {

class ListSubscriptionsResponsePrivate;

class QTAWSSNS_EXPORT ListSubscriptionsResponse : public SnsResponse {
    Q_OBJECT

public:
    ListSubscriptionsResponse(const ListSubscriptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSubscriptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSubscriptionsResponse)
    Q_DISABLE_COPY(ListSubscriptionsResponse)

};

} // namespace Sns
} // namespace QtAws

#endif
