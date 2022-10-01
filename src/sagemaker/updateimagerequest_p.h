// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIMAGEREQUEST_P_H
#define QTAWS_UPDATEIMAGEREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "updateimagerequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateImageRequest;

class UpdateImageRequestPrivate : public SageMakerRequestPrivate {

public:
    UpdateImageRequestPrivate(const SageMakerRequest::Action action,
                                   UpdateImageRequest * const q);
    UpdateImageRequestPrivate(const UpdateImageRequestPrivate &other,
                                   UpdateImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateImageRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
