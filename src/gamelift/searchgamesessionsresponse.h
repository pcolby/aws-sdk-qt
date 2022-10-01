// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHGAMESESSIONSRESPONSE_H
#define QTAWS_SEARCHGAMESESSIONSRESPONSE_H

#include "gameliftresponse.h"
#include "searchgamesessionsrequest.h"

namespace QtAws {
namespace GameLift {

class SearchGameSessionsResponsePrivate;

class QTAWSGAMELIFT_EXPORT SearchGameSessionsResponse : public GameLiftResponse {
    Q_OBJECT

public:
    SearchGameSessionsResponse(const SearchGameSessionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchGameSessionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchGameSessionsResponse)
    Q_DISABLE_COPY(SearchGameSessionsResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
