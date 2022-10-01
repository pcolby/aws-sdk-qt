// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONPROFILEREQUEST_H
#define QTAWS_DELETECONFIGURATIONPROFILEREQUEST_H

#include "appconfigrequest.h"

namespace QtAws {
namespace AppConfig {

class DeleteConfigurationProfileRequestPrivate;

class QTAWSAPPCONFIG_EXPORT DeleteConfigurationProfileRequest : public AppConfigRequest {

public:
    DeleteConfigurationProfileRequest(const DeleteConfigurationProfileRequest &other);
    DeleteConfigurationProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConfigurationProfileRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
