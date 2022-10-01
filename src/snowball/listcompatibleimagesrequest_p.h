// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPATIBLEIMAGESREQUEST_P_H
#define QTAWS_LISTCOMPATIBLEIMAGESREQUEST_P_H

#include "snowballrequest_p.h"
#include "listcompatibleimagesrequest.h"

namespace QtAws {
namespace Snowball {

class ListCompatibleImagesRequest;

class ListCompatibleImagesRequestPrivate : public SnowballRequestPrivate {

public:
    ListCompatibleImagesRequestPrivate(const SnowballRequest::Action action,
                                   ListCompatibleImagesRequest * const q);
    ListCompatibleImagesRequestPrivate(const ListCompatibleImagesRequestPrivate &other,
                                   ListCompatibleImagesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCompatibleImagesRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif
