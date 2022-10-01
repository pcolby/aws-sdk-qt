// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESOURCESERVERREQUEST_P_H
#define QTAWS_DELETESOURCESERVERREQUEST_P_H

#include "drsrequest_p.h"
#include "deletesourceserverrequest.h"

namespace QtAws {
namespace Drs {

class DeleteSourceServerRequest;

class DeleteSourceServerRequestPrivate : public DrsRequestPrivate {

public:
    DeleteSourceServerRequestPrivate(const DrsRequest::Action action,
                                   DeleteSourceServerRequest * const q);
    DeleteSourceServerRequestPrivate(const DeleteSourceServerRequestPrivate &other,
                                   DeleteSourceServerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSourceServerRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
