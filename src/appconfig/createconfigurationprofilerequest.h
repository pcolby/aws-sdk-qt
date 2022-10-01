// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFIGURATIONPROFILEREQUEST_H
#define QTAWS_CREATECONFIGURATIONPROFILEREQUEST_H

#include "appconfigrequest.h"

namespace QtAws {
namespace AppConfig {

class CreateConfigurationProfileRequestPrivate;

class QTAWSAPPCONFIG_EXPORT CreateConfigurationProfileRequest : public AppConfigRequest {

public:
    CreateConfigurationProfileRequest(const CreateConfigurationProfileRequest &other);
    CreateConfigurationProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateConfigurationProfileRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
