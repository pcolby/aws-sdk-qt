// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENVIRONMENTREQUEST_P_H
#define QTAWS_DELETEENVIRONMENTREQUEST_P_H

#include "finspacerequest_p.h"
#include "deleteenvironmentrequest.h"

namespace QtAws {
namespace Finspace {

class DeleteEnvironmentRequest;

class DeleteEnvironmentRequestPrivate : public FinspaceRequestPrivate {

public:
    DeleteEnvironmentRequestPrivate(const FinspaceRequest::Action action,
                                   DeleteEnvironmentRequest * const q);
    DeleteEnvironmentRequestPrivate(const DeleteEnvironmentRequestPrivate &other,
                                   DeleteEnvironmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEnvironmentRequest)

};

} // namespace Finspace
} // namespace QtAws

#endif
