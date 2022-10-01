// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUICKCONNECTSRESPONSE_H
#define QTAWS_LISTQUICKCONNECTSRESPONSE_H

#include "connectresponse.h"
#include "listquickconnectsrequest.h"

namespace QtAws {
namespace Connect {

class ListQuickConnectsResponsePrivate;

class QTAWSCONNECT_EXPORT ListQuickConnectsResponse : public ConnectResponse {
    Q_OBJECT

public:
    ListQuickConnectsResponse(const ListQuickConnectsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListQuickConnectsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListQuickConnectsResponse)
    Q_DISABLE_COPY(ListQuickConnectsResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
