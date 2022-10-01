// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTUDIOREQUEST_P_H
#define QTAWS_DELETESTUDIOREQUEST_P_H

#include "nimblerequest_p.h"
#include "deletestudiorequest.h"

namespace QtAws {
namespace Nimble {

class DeleteStudioRequest;

class DeleteStudioRequestPrivate : public NimbleRequestPrivate {

public:
    DeleteStudioRequestPrivate(const NimbleRequest::Action action,
                                   DeleteStudioRequest * const q);
    DeleteStudioRequestPrivate(const DeleteStudioRequestPrivate &other,
                                   DeleteStudioRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteStudioRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
