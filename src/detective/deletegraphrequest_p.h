// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGRAPHREQUEST_P_H
#define QTAWS_DELETEGRAPHREQUEST_P_H

#include "detectiverequest_p.h"
#include "deletegraphrequest.h"

namespace QtAws {
namespace Detective {

class DeleteGraphRequest;

class DeleteGraphRequestPrivate : public DetectiveRequestPrivate {

public:
    DeleteGraphRequestPrivate(const DetectiveRequest::Action action,
                                   DeleteGraphRequest * const q);
    DeleteGraphRequestPrivate(const DeleteGraphRequestPrivate &other,
                                   DeleteGraphRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteGraphRequest)

};

} // namespace Detective
} // namespace QtAws

#endif
