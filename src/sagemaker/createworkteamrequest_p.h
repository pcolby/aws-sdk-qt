// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWORKTEAMREQUEST_P_H
#define QTAWS_CREATEWORKTEAMREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createworkteamrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateWorkteamRequest;

class CreateWorkteamRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateWorkteamRequestPrivate(const SageMakerRequest::Action action,
                                   CreateWorkteamRequest * const q);
    CreateWorkteamRequestPrivate(const CreateWorkteamRequestPrivate &other,
                                   CreateWorkteamRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateWorkteamRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
