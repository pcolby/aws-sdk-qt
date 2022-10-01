// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTAGEDEPLOYMENTSRESPONSE_H
#define QTAWS_LISTSTAGEDEPLOYMENTSRESPONSE_H

#include "gamesparksresponse.h"
#include "liststagedeploymentsrequest.h"

namespace QtAws {
namespace GameSparks {

class ListStageDeploymentsResponsePrivate;

class QTAWSGAMESPARKS_EXPORT ListStageDeploymentsResponse : public GameSparksResponse {
    Q_OBJECT

public:
    ListStageDeploymentsResponse(const ListStageDeploymentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListStageDeploymentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStageDeploymentsResponse)
    Q_DISABLE_COPY(ListStageDeploymentsResponse)

};

} // namespace GameSparks
} // namespace QtAws

#endif
