// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIMAGEREQUEST_P_H
#define QTAWS_DELETEIMAGEREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "deleteimagerequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteImageRequest;

class DeleteImageRequestPrivate : public SageMakerRequestPrivate {

public:
    DeleteImageRequestPrivate(const SageMakerRequest::Action action,
                                   DeleteImageRequest * const q);
    DeleteImageRequestPrivate(const DeleteImageRequestPrivate &other,
                                   DeleteImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteImageRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
