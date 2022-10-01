// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONCOMPONENTDETAILSRESPONSE_H
#define QTAWS_GETAPPLICATIONCOMPONENTDETAILSRESPONSE_H

#include "migrationhubstrategyresponse.h"
#include "getapplicationcomponentdetailsrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class GetApplicationComponentDetailsResponsePrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT GetApplicationComponentDetailsResponse : public MigrationHubStrategyResponse {
    Q_OBJECT

public:
    GetApplicationComponentDetailsResponse(const GetApplicationComponentDetailsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetApplicationComponentDetailsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApplicationComponentDetailsResponse)
    Q_DISABLE_COPY(GetApplicationComponentDetailsResponse)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
