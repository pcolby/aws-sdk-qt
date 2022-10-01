// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATES3RESOURCESREQUEST_P_H
#define QTAWS_UPDATES3RESOURCESREQUEST_P_H

#include "macierequest_p.h"
#include "updates3resourcesrequest.h"

namespace QtAws {
namespace Macie {

class UpdateS3ResourcesRequest;

class UpdateS3ResourcesRequestPrivate : public MacieRequestPrivate {

public:
    UpdateS3ResourcesRequestPrivate(const MacieRequest::Action action,
                                   UpdateS3ResourcesRequest * const q);
    UpdateS3ResourcesRequestPrivate(const UpdateS3ResourcesRequestPrivate &other,
                                   UpdateS3ResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateS3ResourcesRequest)

};

} // namespace Macie
} // namespace QtAws

#endif
