// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPIMAGECONFIGREQUEST_P_H
#define QTAWS_UPDATEAPPIMAGECONFIGREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "updateappimageconfigrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateAppImageConfigRequest;

class UpdateAppImageConfigRequestPrivate : public SageMakerRequestPrivate {

public:
    UpdateAppImageConfigRequestPrivate(const SageMakerRequest::Action action,
                                   UpdateAppImageConfigRequest * const q);
    UpdateAppImageConfigRequestPrivate(const UpdateAppImageConfigRequestPrivate &other,
                                   UpdateAppImageConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAppImageConfigRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
