// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXTENSIONSREQUEST_P_H
#define QTAWS_LISTEXTENSIONSREQUEST_P_H

#include "appconfigrequest_p.h"
#include "listextensionsrequest.h"

namespace QtAws {
namespace AppConfig {

class ListExtensionsRequest;

class ListExtensionsRequestPrivate : public AppConfigRequestPrivate {

public:
    ListExtensionsRequestPrivate(const AppConfigRequest::Action action,
                                   ListExtensionsRequest * const q);
    ListExtensionsRequestPrivate(const ListExtensionsRequestPrivate &other,
                                   ListExtensionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListExtensionsRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
