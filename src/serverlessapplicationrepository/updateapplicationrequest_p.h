// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPLICATIONREQUEST_P_H
#define QTAWS_UPDATEAPPLICATIONREQUEST_P_H

#include "serverlessapplicationrepositoryrequest_p.h"
#include "updateapplicationrequest.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class UpdateApplicationRequest;

class UpdateApplicationRequestPrivate : public ServerlessApplicationRepositoryRequestPrivate {

public:
    UpdateApplicationRequestPrivate(const ServerlessApplicationRepositoryRequest::Action action,
                                   UpdateApplicationRequest * const q);
    UpdateApplicationRequestPrivate(const UpdateApplicationRequestPrivate &other,
                                   UpdateApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateApplicationRequest)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
