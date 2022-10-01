// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKTEAMREQUEST_P_H
#define QTAWS_DELETEWORKTEAMREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "deleteworkteamrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteWorkteamRequest;

class DeleteWorkteamRequestPrivate : public SageMakerRequestPrivate {

public:
    DeleteWorkteamRequestPrivate(const SageMakerRequest::Action action,
                                   DeleteWorkteamRequest * const q);
    DeleteWorkteamRequestPrivate(const DeleteWorkteamRequestPrivate &other,
                                   DeleteWorkteamRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteWorkteamRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
