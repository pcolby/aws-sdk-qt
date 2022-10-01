// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONCOMPONENTSRESPONSE_H
#define QTAWS_LISTAPPLICATIONCOMPONENTSRESPONSE_H

#include "migrationhubstrategyresponse.h"
#include "listapplicationcomponentsrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class ListApplicationComponentsResponsePrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT ListApplicationComponentsResponse : public MigrationHubStrategyResponse {
    Q_OBJECT

public:
    ListApplicationComponentsResponse(const ListApplicationComponentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListApplicationComponentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListApplicationComponentsResponse)
    Q_DISABLE_COPY(ListApplicationComponentsResponse)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
