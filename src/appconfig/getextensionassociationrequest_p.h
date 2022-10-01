// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXTENSIONASSOCIATIONREQUEST_P_H
#define QTAWS_GETEXTENSIONASSOCIATIONREQUEST_P_H

#include "appconfigrequest_p.h"
#include "getextensionassociationrequest.h"

namespace QtAws {
namespace AppConfig {

class GetExtensionAssociationRequest;

class GetExtensionAssociationRequestPrivate : public AppConfigRequestPrivate {

public:
    GetExtensionAssociationRequestPrivate(const AppConfigRequest::Action action,
                                   GetExtensionAssociationRequest * const q);
    GetExtensionAssociationRequestPrivate(const GetExtensionAssociationRequestPrivate &other,
                                   GetExtensionAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetExtensionAssociationRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
