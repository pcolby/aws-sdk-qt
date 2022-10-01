// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXTENSIONASSOCIATIONREQUEST_H
#define QTAWS_CREATEEXTENSIONASSOCIATIONREQUEST_H

#include "appconfigrequest.h"

namespace QtAws {
namespace AppConfig {

class CreateExtensionAssociationRequestPrivate;

class QTAWSAPPCONFIG_EXPORT CreateExtensionAssociationRequest : public AppConfigRequest {

public:
    CreateExtensionAssociationRequest(const CreateExtensionAssociationRequest &other);
    CreateExtensionAssociationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateExtensionAssociationRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
