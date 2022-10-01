// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXTENSIONASSOCIATIONREQUEST_H
#define QTAWS_DELETEEXTENSIONASSOCIATIONREQUEST_H

#include "appconfigrequest.h"

namespace QtAws {
namespace AppConfig {

class DeleteExtensionAssociationRequestPrivate;

class QTAWSAPPCONFIG_EXPORT DeleteExtensionAssociationRequest : public AppConfigRequest {

public:
    DeleteExtensionAssociationRequest(const DeleteExtensionAssociationRequest &other);
    DeleteExtensionAssociationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteExtensionAssociationRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
