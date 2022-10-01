// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHOSTEDCONFIGURATIONVERSIONRESPONSE_H
#define QTAWS_GETHOSTEDCONFIGURATIONVERSIONRESPONSE_H

#include "appconfigresponse.h"
#include "gethostedconfigurationversionrequest.h"

namespace QtAws {
namespace AppConfig {

class GetHostedConfigurationVersionResponsePrivate;

class QTAWSAPPCONFIG_EXPORT GetHostedConfigurationVersionResponse : public AppConfigResponse {
    Q_OBJECT

public:
    GetHostedConfigurationVersionResponse(const GetHostedConfigurationVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetHostedConfigurationVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetHostedConfigurationVersionResponse)
    Q_DISABLE_COPY(GetHostedConfigurationVersionResponse)

};

} // namespace AppConfig
} // namespace QtAws

#endif
