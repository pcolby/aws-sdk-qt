// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHOMEREGIONRESPONSE_H
#define QTAWS_GETHOMEREGIONRESPONSE_H

#include "migrationhubconfigresponse.h"
#include "gethomeregionrequest.h"

namespace QtAws {
namespace MigrationHubConfig {

class GetHomeRegionResponsePrivate;

class QTAWSMIGRATIONHUBCONFIG_EXPORT GetHomeRegionResponse : public MigrationHubConfigResponse {
    Q_OBJECT

public:
    GetHomeRegionResponse(const GetHomeRegionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetHomeRegionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetHomeRegionResponse)
    Q_DISABLE_COPY(GetHomeRegionResponse)

};

} // namespace MigrationHubConfig
} // namespace QtAws

#endif
