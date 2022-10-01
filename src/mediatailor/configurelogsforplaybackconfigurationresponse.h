// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIGURELOGSFORPLAYBACKCONFIGURATIONRESPONSE_H
#define QTAWS_CONFIGURELOGSFORPLAYBACKCONFIGURATIONRESPONSE_H

#include "mediatailorresponse.h"
#include "configurelogsforplaybackconfigurationrequest.h"

namespace QtAws {
namespace MediaTailor {

class ConfigureLogsForPlaybackConfigurationResponsePrivate;

class QTAWSMEDIATAILOR_EXPORT ConfigureLogsForPlaybackConfigurationResponse : public MediaTailorResponse {
    Q_OBJECT

public:
    ConfigureLogsForPlaybackConfigurationResponse(const ConfigureLogsForPlaybackConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ConfigureLogsForPlaybackConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConfigureLogsForPlaybackConfigurationResponse)
    Q_DISABLE_COPY(ConfigureLogsForPlaybackConfigurationResponse)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
