// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEXTENSIONREQUEST_H
#define QTAWS_UPDATEEXTENSIONREQUEST_H

#include "appconfigrequest.h"

namespace QtAws {
namespace AppConfig {

class UpdateExtensionRequestPrivate;

class QTAWSAPPCONFIG_EXPORT UpdateExtensionRequest : public AppConfigRequest {

public:
    UpdateExtensionRequest(const UpdateExtensionRequest &other);
    UpdateExtensionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateExtensionRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
