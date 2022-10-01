// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHUMANTASKUIREQUEST_P_H
#define QTAWS_DELETEHUMANTASKUIREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "deletehumantaskuirequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteHumanTaskUiRequest;

class DeleteHumanTaskUiRequestPrivate : public SageMakerRequestPrivate {

public:
    DeleteHumanTaskUiRequestPrivate(const SageMakerRequest::Action action,
                                   DeleteHumanTaskUiRequest * const q);
    DeleteHumanTaskUiRequestPrivate(const DeleteHumanTaskUiRequestPrivate &other,
                                   DeleteHumanTaskUiRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteHumanTaskUiRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
