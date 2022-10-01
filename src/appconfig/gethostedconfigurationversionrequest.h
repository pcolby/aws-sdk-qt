// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHOSTEDCONFIGURATIONVERSIONREQUEST_H
#define QTAWS_GETHOSTEDCONFIGURATIONVERSIONREQUEST_H

#include "appconfigrequest.h"

namespace QtAws {
namespace AppConfig {

class GetHostedConfigurationVersionRequestPrivate;

class QTAWSAPPCONFIG_EXPORT GetHostedConfigurationVersionRequest : public AppConfigRequest {

public:
    GetHostedConfigurationVersionRequest(const GetHostedConfigurationVersionRequest &other);
    GetHostedConfigurationVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetHostedConfigurationVersionRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
