// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXTENSIONASSOCIATIONSREQUEST_P_H
#define QTAWS_LISTEXTENSIONASSOCIATIONSREQUEST_P_H

#include "appconfigrequest_p.h"
#include "listextensionassociationsrequest.h"

namespace QtAws {
namespace AppConfig {

class ListExtensionAssociationsRequest;

class ListExtensionAssociationsRequestPrivate : public AppConfigRequestPrivate {

public:
    ListExtensionAssociationsRequestPrivate(const AppConfigRequest::Action action,
                                   ListExtensionAssociationsRequest * const q);
    ListExtensionAssociationsRequestPrivate(const ListExtensionAssociationsRequestPrivate &other,
                                   ListExtensionAssociationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListExtensionAssociationsRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
