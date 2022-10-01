// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMAGESREQUEST_P_H
#define QTAWS_LISTIMAGESREQUEST_P_H

#include "ecrrequest_p.h"
#include "listimagesrequest.h"

namespace QtAws {
namespace Ecr {

class ListImagesRequest;

class ListImagesRequestPrivate : public EcrRequestPrivate {

public:
    ListImagesRequestPrivate(const EcrRequest::Action action,
                                   ListImagesRequest * const q);
    ListImagesRequestPrivate(const ListImagesRequestPrivate &other,
                                   ListImagesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListImagesRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
