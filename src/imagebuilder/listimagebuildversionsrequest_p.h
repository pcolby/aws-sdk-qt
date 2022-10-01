// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMAGEBUILDVERSIONSREQUEST_P_H
#define QTAWS_LISTIMAGEBUILDVERSIONSREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "listimagebuildversionsrequest.h"

namespace QtAws {
namespace ImageBuilder {

class ListImageBuildVersionsRequest;

class ListImageBuildVersionsRequestPrivate : public ImageBuilderRequestPrivate {

public:
    ListImageBuildVersionsRequestPrivate(const ImageBuilderRequest::Action action,
                                   ListImageBuildVersionsRequest * const q);
    ListImageBuildVersionsRequestPrivate(const ListImageBuildVersionsRequestPrivate &other,
                                   ListImageBuildVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListImageBuildVersionsRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
