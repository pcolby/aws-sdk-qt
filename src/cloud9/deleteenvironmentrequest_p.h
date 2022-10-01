// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENVIRONMENTREQUEST_P_H
#define QTAWS_DELETEENVIRONMENTREQUEST_P_H

#include "cloud9request_p.h"
#include "deleteenvironmentrequest.h"

namespace QtAws {
namespace Cloud9 {

class DeleteEnvironmentRequest;

class DeleteEnvironmentRequestPrivate : public Cloud9RequestPrivate {

public:
    DeleteEnvironmentRequestPrivate(const Cloud9Request::Action action,
                                   DeleteEnvironmentRequest * const q);
    DeleteEnvironmentRequestPrivate(const DeleteEnvironmentRequestPrivate &other,
                                   DeleteEnvironmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEnvironmentRequest)

};

} // namespace Cloud9
} // namespace QtAws

#endif
