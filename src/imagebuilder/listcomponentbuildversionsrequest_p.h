// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPONENTBUILDVERSIONSREQUEST_P_H
#define QTAWS_LISTCOMPONENTBUILDVERSIONSREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "listcomponentbuildversionsrequest.h"

namespace QtAws {
namespace ImageBuilder {

class ListComponentBuildVersionsRequest;

class ListComponentBuildVersionsRequestPrivate : public ImageBuilderRequestPrivate {

public:
    ListComponentBuildVersionsRequestPrivate(const ImageBuilderRequest::Action action,
                                   ListComponentBuildVersionsRequest * const q);
    ListComponentBuildVersionsRequestPrivate(const ListComponentBuildVersionsRequestPrivate &other,
                                   ListComponentBuildVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListComponentBuildVersionsRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
