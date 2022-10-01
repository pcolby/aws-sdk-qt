// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEXTENSIONASSOCIATIONREQUEST_H
#define QTAWS_UPDATEEXTENSIONASSOCIATIONREQUEST_H

#include "appconfigrequest.h"

namespace QtAws {
namespace AppConfig {

class UpdateExtensionAssociationRequestPrivate;

class QTAWSAPPCONFIG_EXPORT UpdateExtensionAssociationRequest : public AppConfigRequest {

public:
    UpdateExtensionAssociationRequest(const UpdateExtensionAssociationRequest &other);
    UpdateExtensionAssociationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateExtensionAssociationRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
