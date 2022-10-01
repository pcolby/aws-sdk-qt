// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPACKAGESREQUEST_P_H
#define QTAWS_LISTPACKAGESREQUEST_P_H

#include "panoramarequest_p.h"
#include "listpackagesrequest.h"

namespace QtAws {
namespace Panorama {

class ListPackagesRequest;

class ListPackagesRequestPrivate : public PanoramaRequestPrivate {

public:
    ListPackagesRequestPrivate(const PanoramaRequest::Action action,
                                   ListPackagesRequest * const q);
    ListPackagesRequestPrivate(const ListPackagesRequestPrivate &other,
                                   ListPackagesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPackagesRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
