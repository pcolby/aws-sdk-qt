// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKTEAMREQUEST_P_H
#define QTAWS_UPDATEWORKTEAMREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "updateworkteamrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateWorkteamRequest;

class UpdateWorkteamRequestPrivate : public SageMakerRequestPrivate {

public:
    UpdateWorkteamRequestPrivate(const SageMakerRequest::Action action,
                                   UpdateWorkteamRequest * const q);
    UpdateWorkteamRequestPrivate(const UpdateWorkteamRequestPrivate &other,
                                   UpdateWorkteamRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateWorkteamRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
