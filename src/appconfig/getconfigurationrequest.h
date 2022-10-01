// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFIGURATIONREQUEST_H
#define QTAWS_GETCONFIGURATIONREQUEST_H

#include "appconfigrequest.h"

namespace QtAws {
namespace AppConfig {

class GetConfigurationRequestPrivate;

class QTAWSAPPCONFIG_EXPORT GetConfigurationRequest : public AppConfigRequest {

public:
    GetConfigurationRequest(const GetConfigurationRequest &other);
    GetConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConfigurationRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
