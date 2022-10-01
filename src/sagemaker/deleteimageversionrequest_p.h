// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIMAGEVERSIONREQUEST_P_H
#define QTAWS_DELETEIMAGEVERSIONREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "deleteimageversionrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteImageVersionRequest;

class DeleteImageVersionRequestPrivate : public SageMakerRequestPrivate {

public:
    DeleteImageVersionRequestPrivate(const SageMakerRequest::Action action,
                                   DeleteImageVersionRequest * const q);
    DeleteImageVersionRequestPrivate(const DeleteImageVersionRequestPrivate &other,
                                   DeleteImageVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteImageVersionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
