// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLEXBOTSRESPONSE_H
#define QTAWS_LISTLEXBOTSRESPONSE_H

#include "connectresponse.h"
#include "listlexbotsrequest.h"

namespace QtAws {
namespace Connect {

class ListLexBotsResponsePrivate;

class QTAWSCONNECT_EXPORT ListLexBotsResponse : public ConnectResponse {
    Q_OBJECT

public:
    ListLexBotsResponse(const ListLexBotsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLexBotsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLexBotsResponse)
    Q_DISABLE_COPY(ListLexBotsResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
