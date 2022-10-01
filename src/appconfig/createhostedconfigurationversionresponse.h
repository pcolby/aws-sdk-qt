// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHOSTEDCONFIGURATIONVERSIONRESPONSE_H
#define QTAWS_CREATEHOSTEDCONFIGURATIONVERSIONRESPONSE_H

#include "appconfigresponse.h"
#include "createhostedconfigurationversionrequest.h"

namespace QtAws {
namespace AppConfig {

class CreateHostedConfigurationVersionResponsePrivate;

class QTAWSAPPCONFIG_EXPORT CreateHostedConfigurationVersionResponse : public AppConfigResponse {
    Q_OBJECT

public:
    CreateHostedConfigurationVersionResponse(const CreateHostedConfigurationVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateHostedConfigurationVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateHostedConfigurationVersionResponse)
    Q_DISABLE_COPY(CreateHostedConfigurationVersionResponse)

};

} // namespace AppConfig
} // namespace QtAws

#endif
