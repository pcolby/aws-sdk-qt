// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMAGEPIPELINESREQUEST_P_H
#define QTAWS_LISTIMAGEPIPELINESREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "listimagepipelinesrequest.h"

namespace QtAws {
namespace ImageBuilder {

class ListImagePipelinesRequest;

class ListImagePipelinesRequestPrivate : public ImageBuilderRequestPrivate {

public:
    ListImagePipelinesRequestPrivate(const ImageBuilderRequest::Action action,
                                   ListImagePipelinesRequest * const q);
    ListImagePipelinesRequestPrivate(const ListImagePipelinesRequestPrivate &other,
                                   ListImagePipelinesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListImagePipelinesRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
