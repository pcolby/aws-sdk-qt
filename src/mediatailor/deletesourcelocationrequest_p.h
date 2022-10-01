// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESOURCELOCATIONREQUEST_P_H
#define QTAWS_DELETESOURCELOCATIONREQUEST_P_H

#include "mediatailorrequest_p.h"
#include "deletesourcelocationrequest.h"

namespace QtAws {
namespace MediaTailor {

class DeleteSourceLocationRequest;

class DeleteSourceLocationRequestPrivate : public MediaTailorRequestPrivate {

public:
    DeleteSourceLocationRequestPrivate(const MediaTailorRequest::Action action,
                                   DeleteSourceLocationRequest * const q);
    DeleteSourceLocationRequestPrivate(const DeleteSourceLocationRequestPrivate &other,
                                   DeleteSourceLocationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSourceLocationRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
