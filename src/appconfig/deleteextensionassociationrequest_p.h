// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXTENSIONASSOCIATIONREQUEST_P_H
#define QTAWS_DELETEEXTENSIONASSOCIATIONREQUEST_P_H

#include "appconfigrequest_p.h"
#include "deleteextensionassociationrequest.h"

namespace QtAws {
namespace AppConfig {

class DeleteExtensionAssociationRequest;

class DeleteExtensionAssociationRequestPrivate : public AppConfigRequestPrivate {

public:
    DeleteExtensionAssociationRequestPrivate(const AppConfigRequest::Action action,
                                   DeleteExtensionAssociationRequest * const q);
    DeleteExtensionAssociationRequestPrivate(const DeleteExtensionAssociationRequestPrivate &other,
                                   DeleteExtensionAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteExtensionAssociationRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
