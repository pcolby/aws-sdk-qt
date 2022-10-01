// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATES3RESOURCESREQUEST_P_H
#define QTAWS_DISASSOCIATES3RESOURCESREQUEST_P_H

#include "macierequest_p.h"
#include "disassociates3resourcesrequest.h"

namespace QtAws {
namespace Macie {

class DisassociateS3ResourcesRequest;

class DisassociateS3ResourcesRequestPrivate : public MacieRequestPrivate {

public:
    DisassociateS3ResourcesRequestPrivate(const MacieRequest::Action action,
                                   DisassociateS3ResourcesRequest * const q);
    DisassociateS3ResourcesRequestPrivate(const DisassociateS3ResourcesRequestPrivate &other,
                                   DisassociateS3ResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateS3ResourcesRequest)

};

} // namespace Macie
} // namespace QtAws

#endif
