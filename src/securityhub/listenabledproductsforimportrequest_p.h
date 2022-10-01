// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENABLEDPRODUCTSFORIMPORTREQUEST_P_H
#define QTAWS_LISTENABLEDPRODUCTSFORIMPORTREQUEST_P_H

#include "securityhubrequest_p.h"
#include "listenabledproductsforimportrequest.h"

namespace QtAws {
namespace SecurityHub {

class ListEnabledProductsForImportRequest;

class ListEnabledProductsForImportRequestPrivate : public SecurityHubRequestPrivate {

public:
    ListEnabledProductsForImportRequestPrivate(const SecurityHubRequest::Action action,
                                   ListEnabledProductsForImportRequest * const q);
    ListEnabledProductsForImportRequestPrivate(const ListEnabledProductsForImportRequestPrivate &other,
                                   ListEnabledProductsForImportRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEnabledProductsForImportRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
