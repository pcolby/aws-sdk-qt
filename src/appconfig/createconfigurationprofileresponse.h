// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFIGURATIONPROFILERESPONSE_H
#define QTAWS_CREATECONFIGURATIONPROFILERESPONSE_H

#include "appconfigresponse.h"
#include "createconfigurationprofilerequest.h"

namespace QtAws {
namespace AppConfig {

class CreateConfigurationProfileResponsePrivate;

class QTAWSAPPCONFIG_EXPORT CreateConfigurationProfileResponse : public AppConfigResponse {
    Q_OBJECT

public:
    CreateConfigurationProfileResponse(const CreateConfigurationProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateConfigurationProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateConfigurationProfileResponse)
    Q_DISABLE_COPY(CreateConfigurationProfileResponse)

};

} // namespace AppConfig
} // namespace QtAws

#endif
