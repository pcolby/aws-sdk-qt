// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMAGESREQUEST_P_H
#define QTAWS_LISTIMAGESREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "listimagesrequest.h"

namespace QtAws {
namespace ImageBuilder {

class ListImagesRequest;

class ListImagesRequestPrivate : public ImageBuilderRequestPrivate {

public:
    ListImagesRequestPrivate(const ImageBuilderRequest::Action action,
                                   ListImagesRequest * const q);
    ListImagesRequestPrivate(const ListImagesRequestPrivate &other,
                                   ListImagesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListImagesRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
