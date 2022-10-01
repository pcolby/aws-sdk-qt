// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFIGURATIONPROFILERESPONSE_H
#define QTAWS_GETCONFIGURATIONPROFILERESPONSE_H

#include "appconfigresponse.h"
#include "getconfigurationprofilerequest.h"

namespace QtAws {
namespace AppConfig {

class GetConfigurationProfileResponsePrivate;

class QTAWSAPPCONFIG_EXPORT GetConfigurationProfileResponse : public AppConfigResponse {
    Q_OBJECT

public:
    GetConfigurationProfileResponse(const GetConfigurationProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetConfigurationProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConfigurationProfileResponse)
    Q_DISABLE_COPY(GetConfigurationProfileResponse)

};

} // namespace AppConfig
} // namespace QtAws

#endif
