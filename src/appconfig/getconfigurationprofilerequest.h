// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFIGURATIONPROFILEREQUEST_H
#define QTAWS_GETCONFIGURATIONPROFILEREQUEST_H

#include "appconfigrequest.h"

namespace QtAws {
namespace AppConfig {

class GetConfigurationProfileRequestPrivate;

class QTAWSAPPCONFIG_EXPORT GetConfigurationProfileRequest : public AppConfigRequest {

public:
    GetConfigurationProfileRequest(const GetConfigurationProfileRequest &other);
    GetConfigurationProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConfigurationProfileRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
