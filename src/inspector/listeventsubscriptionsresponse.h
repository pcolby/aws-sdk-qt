// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTSUBSCRIPTIONSRESPONSE_H
#define QTAWS_LISTEVENTSUBSCRIPTIONSRESPONSE_H

#include "inspectorresponse.h"
#include "listeventsubscriptionsrequest.h"

namespace QtAws {
namespace Inspector {

class ListEventSubscriptionsResponsePrivate;

class QTAWSINSPECTOR_EXPORT ListEventSubscriptionsResponse : public InspectorResponse {
    Q_OBJECT

public:
    ListEventSubscriptionsResponse(const ListEventSubscriptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEventSubscriptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEventSubscriptionsResponse)
    Q_DISABLE_COPY(ListEventSubscriptionsResponse)

};

} // namespace Inspector
} // namespace QtAws

#endif
