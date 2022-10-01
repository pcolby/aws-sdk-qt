// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATES3RESOURCESREQUEST_P_H
#define QTAWS_ASSOCIATES3RESOURCESREQUEST_P_H

#include "macierequest_p.h"
#include "associates3resourcesrequest.h"

namespace QtAws {
namespace Macie {

class AssociateS3ResourcesRequest;

class AssociateS3ResourcesRequestPrivate : public MacieRequestPrivate {

public:
    AssociateS3ResourcesRequestPrivate(const MacieRequest::Action action,
                                   AssociateS3ResourcesRequest * const q);
    AssociateS3ResourcesRequestPrivate(const AssociateS3ResourcesRequestPrivate &other,
                                   AssociateS3ResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateS3ResourcesRequest)

};

} // namespace Macie
} // namespace QtAws

#endif
