// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHITREQUEST_P_H
#define QTAWS_DELETEHITREQUEST_P_H

#include "mturkrequest_p.h"
#include "deletehitrequest.h"

namespace QtAws {
namespace MTurk {

class DeleteHITRequest;

class DeleteHITRequestPrivate : public MTurkRequestPrivate {

public:
    DeleteHITRequestPrivate(const MTurkRequest::Action action,
                                   DeleteHITRequest * const q);
    DeleteHITRequestPrivate(const DeleteHITRequestPrivate &other,
                                   DeleteHITRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteHITRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
