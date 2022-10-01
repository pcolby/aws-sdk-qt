// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHUMANTASKUIREQUEST_P_H
#define QTAWS_CREATEHUMANTASKUIREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createhumantaskuirequest.h"

namespace QtAws {
namespace SageMaker {

class CreateHumanTaskUiRequest;

class CreateHumanTaskUiRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateHumanTaskUiRequestPrivate(const SageMakerRequest::Action action,
                                   CreateHumanTaskUiRequest * const q);
    CreateHumanTaskUiRequestPrivate(const CreateHumanTaskUiRequestPrivate &other,
                                   CreateHumanTaskUiRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateHumanTaskUiRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
