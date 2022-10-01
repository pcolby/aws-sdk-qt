// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONREQUEST_P_H
#define QTAWS_DELETEAPPLICATIONREQUEST_P_H

#include "serverlessapplicationrepositoryrequest_p.h"
#include "deleteapplicationrequest.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class DeleteApplicationRequest;

class DeleteApplicationRequestPrivate : public ServerlessApplicationRepositoryRequestPrivate {

public:
    DeleteApplicationRequestPrivate(const ServerlessApplicationRepositoryRequest::Action action,
                                   DeleteApplicationRequest * const q);
    DeleteApplicationRequestPrivate(const DeleteApplicationRequestPrivate &other,
                                   DeleteApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteApplicationRequest)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
