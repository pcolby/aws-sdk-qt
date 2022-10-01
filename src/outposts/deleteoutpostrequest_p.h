// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOUTPOSTREQUEST_P_H
#define QTAWS_DELETEOUTPOSTREQUEST_P_H

#include "outpostsrequest_p.h"
#include "deleteoutpostrequest.h"

namespace QtAws {
namespace Outposts {

class DeleteOutpostRequest;

class DeleteOutpostRequestPrivate : public OutpostsRequestPrivate {

public:
    DeleteOutpostRequestPrivate(const OutpostsRequest::Action action,
                                   DeleteOutpostRequest * const q);
    DeleteOutpostRequestPrivate(const DeleteOutpostRequestPrivate &other,
                                   DeleteOutpostRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteOutpostRequest)

};

} // namespace Outposts
} // namespace QtAws

#endif
