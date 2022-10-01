// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEXTENSIONASSOCIATIONREQUEST_P_H
#define QTAWS_UPDATEEXTENSIONASSOCIATIONREQUEST_P_H

#include "appconfigrequest_p.h"
#include "updateextensionassociationrequest.h"

namespace QtAws {
namespace AppConfig {

class UpdateExtensionAssociationRequest;

class UpdateExtensionAssociationRequestPrivate : public AppConfigRequestPrivate {

public:
    UpdateExtensionAssociationRequestPrivate(const AppConfigRequest::Action action,
                                   UpdateExtensionAssociationRequest * const q);
    UpdateExtensionAssociationRequestPrivate(const UpdateExtensionAssociationRequestPrivate &other,
                                   UpdateExtensionAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateExtensionAssociationRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
