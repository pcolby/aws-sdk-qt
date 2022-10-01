// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMAGEPACKAGESREQUEST_P_H
#define QTAWS_LISTIMAGEPACKAGESREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "listimagepackagesrequest.h"

namespace QtAws {
namespace ImageBuilder {

class ListImagePackagesRequest;

class ListImagePackagesRequestPrivate : public ImageBuilderRequestPrivate {

public:
    ListImagePackagesRequestPrivate(const ImageBuilderRequest::Action action,
                                   ListImagePackagesRequest * const q);
    ListImagePackagesRequestPrivate(const ListImagePackagesRequestPrivate &other,
                                   ListImagePackagesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListImagePackagesRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
