// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCEINVENTORYREQUEST_P_H
#define QTAWS_LISTRESOURCEINVENTORYREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "listresourceinventoryrequest.h"

namespace QtAws {
namespace LicenseManager {

class ListResourceInventoryRequest;

class ListResourceInventoryRequestPrivate : public LicenseManagerRequestPrivate {

public:
    ListResourceInventoryRequestPrivate(const LicenseManagerRequest::Action action,
                                   ListResourceInventoryRequest * const q);
    ListResourceInventoryRequestPrivate(const ListResourceInventoryRequestPrivate &other,
                                   ListResourceInventoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListResourceInventoryRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
