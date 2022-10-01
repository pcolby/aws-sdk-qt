// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXTENSIONASSOCIATIONREQUEST_P_H
#define QTAWS_CREATEEXTENSIONASSOCIATIONREQUEST_P_H

#include "appconfigrequest_p.h"
#include "createextensionassociationrequest.h"

namespace QtAws {
namespace AppConfig {

class CreateExtensionAssociationRequest;

class CreateExtensionAssociationRequestPrivate : public AppConfigRequestPrivate {

public:
    CreateExtensionAssociationRequestPrivate(const AppConfigRequest::Action action,
                                   CreateExtensionAssociationRequest * const q);
    CreateExtensionAssociationRequestPrivate(const CreateExtensionAssociationRequestPrivate &other,
                                   CreateExtensionAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateExtensionAssociationRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
