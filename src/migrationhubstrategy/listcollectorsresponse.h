// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOLLECTORSRESPONSE_H
#define QTAWS_LISTCOLLECTORSRESPONSE_H

#include "migrationhubstrategyresponse.h"
#include "listcollectorsrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class ListCollectorsResponsePrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT ListCollectorsResponse : public MigrationHubStrategyResponse {
    Q_OBJECT

public:
    ListCollectorsResponse(const ListCollectorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCollectorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCollectorsResponse)
    Q_DISABLE_COPY(ListCollectorsResponse)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
