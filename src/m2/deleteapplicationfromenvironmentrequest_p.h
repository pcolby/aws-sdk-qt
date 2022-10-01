// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONFROMENVIRONMENTREQUEST_P_H
#define QTAWS_DELETEAPPLICATIONFROMENVIRONMENTREQUEST_P_H

#include "m2request_p.h"
#include "deleteapplicationfromenvironmentrequest.h"

namespace QtAws {
namespace M2 {

class DeleteApplicationFromEnvironmentRequest;

class DeleteApplicationFromEnvironmentRequestPrivate : public M2RequestPrivate {

public:
    DeleteApplicationFromEnvironmentRequestPrivate(const M2Request::Action action,
                                   DeleteApplicationFromEnvironmentRequest * const q);
    DeleteApplicationFromEnvironmentRequestPrivate(const DeleteApplicationFromEnvironmentRequestPrivate &other,
                                   DeleteApplicationFromEnvironmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteApplicationFromEnvironmentRequest)

};

} // namespace M2
} // namespace QtAws

#endif
