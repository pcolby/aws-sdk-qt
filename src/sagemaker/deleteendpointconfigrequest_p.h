// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENDPOINTCONFIGREQUEST_P_H
#define QTAWS_DELETEENDPOINTCONFIGREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "deleteendpointconfigrequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteEndpointConfigRequest;

class DeleteEndpointConfigRequestPrivate : public SageMakerRequestPrivate {

public:
    DeleteEndpointConfigRequestPrivate(const SageMakerRequest::Action action,
                                   DeleteEndpointConfigRequest * const q);
    DeleteEndpointConfigRequestPrivate(const DeleteEndpointConfigRequestPrivate &other,
                                   DeleteEndpointConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEndpointConfigRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
