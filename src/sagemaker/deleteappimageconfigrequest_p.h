// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPIMAGECONFIGREQUEST_P_H
#define QTAWS_DELETEAPPIMAGECONFIGREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "deleteappimageconfigrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteAppImageConfigRequest;

class DeleteAppImageConfigRequestPrivate : public SageMakerRequestPrivate {

public:
    DeleteAppImageConfigRequestPrivate(const SageMakerRequest::Action action,
                                   DeleteAppImageConfigRequest * const q);
    DeleteAppImageConfigRequestPrivate(const DeleteAppImageConfigRequestPrivate &other,
                                   DeleteAppImageConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAppImageConfigRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
