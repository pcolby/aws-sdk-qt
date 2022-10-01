// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPLICATIONCOMPONENTCONFIGRESPONSE_H
#define QTAWS_UPDATEAPPLICATIONCOMPONENTCONFIGRESPONSE_H

#include "migrationhubstrategyresponse.h"
#include "updateapplicationcomponentconfigrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class UpdateApplicationComponentConfigResponsePrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT UpdateApplicationComponentConfigResponse : public MigrationHubStrategyResponse {
    Q_OBJECT

public:
    UpdateApplicationComponentConfigResponse(const UpdateApplicationComponentConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateApplicationComponentConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateApplicationComponentConfigResponse)
    Q_DISABLE_COPY(UpdateApplicationComponentConfigResponse)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
