// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTUDIOCOMPONENTREQUEST_P_H
#define QTAWS_DELETESTUDIOCOMPONENTREQUEST_P_H

#include "nimblerequest_p.h"
#include "deletestudiocomponentrequest.h"

namespace QtAws {
namespace Nimble {

class DeleteStudioComponentRequest;

class DeleteStudioComponentRequestPrivate : public NimbleRequestPrivate {

public:
    DeleteStudioComponentRequestPrivate(const NimbleRequest::Action action,
                                   DeleteStudioComponentRequest * const q);
    DeleteStudioComponentRequestPrivate(const DeleteStudioComponentRequestPrivate &other,
                                   DeleteStudioComponentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteStudioComponentRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
