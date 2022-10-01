// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXTENSIONASSOCIATIONREQUEST_H
#define QTAWS_GETEXTENSIONASSOCIATIONREQUEST_H

#include "appconfigrequest.h"

namespace QtAws {
namespace AppConfig {

class GetExtensionAssociationRequestPrivate;

class QTAWSAPPCONFIG_EXPORT GetExtensionAssociationRequest : public AppConfigRequest {

public:
    GetExtensionAssociationRequest(const GetExtensionAssociationRequest &other);
    GetExtensionAssociationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetExtensionAssociationRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
