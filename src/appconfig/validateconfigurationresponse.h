// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATECONFIGURATIONRESPONSE_H
#define QTAWS_VALIDATECONFIGURATIONRESPONSE_H

#include "appconfigresponse.h"
#include "validateconfigurationrequest.h"

namespace QtAws {
namespace AppConfig {

class ValidateConfigurationResponsePrivate;

class QTAWSAPPCONFIG_EXPORT ValidateConfigurationResponse : public AppConfigResponse {
    Q_OBJECT

public:
    ValidateConfigurationResponse(const ValidateConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ValidateConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ValidateConfigurationResponse)
    Q_DISABLE_COPY(ValidateConfigurationResponse)

};

} // namespace AppConfig
} // namespace QtAws

#endif
