// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENVIRONMENTREQUEST_P_H
#define QTAWS_DELETEENVIRONMENTREQUEST_P_H

#include "m2request_p.h"
#include "deleteenvironmentrequest.h"

namespace QtAws {
namespace M2 {

class DeleteEnvironmentRequest;

class DeleteEnvironmentRequestPrivate : public M2RequestPrivate {

public:
    DeleteEnvironmentRequestPrivate(const M2Request::Action action,
                                   DeleteEnvironmentRequest * const q);
    DeleteEnvironmentRequestPrivate(const DeleteEnvironmentRequestPrivate &other,
                                   DeleteEnvironmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEnvironmentRequest)

};

} // namespace M2
} // namespace QtAws

#endif
