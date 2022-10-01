// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESOURCESERVERREQUEST_P_H
#define QTAWS_DELETESOURCESERVERREQUEST_P_H

#include "mgnrequest_p.h"
#include "deletesourceserverrequest.h"

namespace QtAws {
namespace Mgn {

class DeleteSourceServerRequest;

class DeleteSourceServerRequestPrivate : public MgnRequestPrivate {

public:
    DeleteSourceServerRequestPrivate(const MgnRequest::Action action,
                                   DeleteSourceServerRequest * const q);
    DeleteSourceServerRequestPrivate(const DeleteSourceServerRequestPrivate &other,
                                   DeleteSourceServerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSourceServerRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
