// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXTENSIONREQUEST_H
#define QTAWS_CREATEEXTENSIONREQUEST_H

#include "appconfigrequest.h"

namespace QtAws {
namespace AppConfig {

class CreateExtensionRequestPrivate;

class QTAWSAPPCONFIG_EXPORT CreateExtensionRequest : public AppConfigRequest {

public:
    CreateExtensionRequest(const CreateExtensionRequest &other);
    CreateExtensionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateExtensionRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
