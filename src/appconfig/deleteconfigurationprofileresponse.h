// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONPROFILERESPONSE_H
#define QTAWS_DELETECONFIGURATIONPROFILERESPONSE_H

#include "appconfigresponse.h"
#include "deleteconfigurationprofilerequest.h"

namespace QtAws {
namespace AppConfig {

class DeleteConfigurationProfileResponsePrivate;

class QTAWSAPPCONFIG_EXPORT DeleteConfigurationProfileResponse : public AppConfigResponse {
    Q_OBJECT

public:
    DeleteConfigurationProfileResponse(const DeleteConfigurationProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteConfigurationProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConfigurationProfileResponse)
    Q_DISABLE_COPY(DeleteConfigurationProfileResponse)

};

} // namespace AppConfig
} // namespace QtAws

#endif
