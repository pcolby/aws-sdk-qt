// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGURATIONPROFILERESPONSE_H
#define QTAWS_UPDATECONFIGURATIONPROFILERESPONSE_H

#include "appconfigresponse.h"
#include "updateconfigurationprofilerequest.h"

namespace QtAws {
namespace AppConfig {

class UpdateConfigurationProfileResponsePrivate;

class QTAWSAPPCONFIG_EXPORT UpdateConfigurationProfileResponse : public AppConfigResponse {
    Q_OBJECT

public:
    UpdateConfigurationProfileResponse(const UpdateConfigurationProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateConfigurationProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConfigurationProfileResponse)
    Q_DISABLE_COPY(UpdateConfigurationProfileResponse)

};

} // namespace AppConfig
} // namespace QtAws

#endif
