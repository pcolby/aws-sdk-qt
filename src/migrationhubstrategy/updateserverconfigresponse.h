// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVERCONFIGRESPONSE_H
#define QTAWS_UPDATESERVERCONFIGRESPONSE_H

#include "migrationhubstrategyresponse.h"
#include "updateserverconfigrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class UpdateServerConfigResponsePrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT UpdateServerConfigResponse : public MigrationHubStrategyResponse {
    Q_OBJECT

public:
    UpdateServerConfigResponse(const UpdateServerConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateServerConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateServerConfigResponse)
    Q_DISABLE_COPY(UpdateServerConfigResponse)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
