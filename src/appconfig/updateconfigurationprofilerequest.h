// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGURATIONPROFILEREQUEST_H
#define QTAWS_UPDATECONFIGURATIONPROFILEREQUEST_H

#include "appconfigrequest.h"

namespace QtAws {
namespace AppConfig {

class UpdateConfigurationProfileRequestPrivate;

class QTAWSAPPCONFIG_EXPORT UpdateConfigurationProfileRequest : public AppConfigRequest {

public:
    UpdateConfigurationProfileRequest(const UpdateConfigurationProfileRequest &other);
    UpdateConfigurationProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConfigurationProfileRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
