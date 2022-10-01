// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHOSTEDCONFIGURATIONVERSIONREQUEST_H
#define QTAWS_CREATEHOSTEDCONFIGURATIONVERSIONREQUEST_H

#include "appconfigrequest.h"

namespace QtAws {
namespace AppConfig {

class CreateHostedConfigurationVersionRequestPrivate;

class QTAWSAPPCONFIG_EXPORT CreateHostedConfigurationVersionRequest : public AppConfigRequest {

public:
    CreateHostedConfigurationVersionRequest(const CreateHostedConfigurationVersionRequest &other);
    CreateHostedConfigurationVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateHostedConfigurationVersionRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
