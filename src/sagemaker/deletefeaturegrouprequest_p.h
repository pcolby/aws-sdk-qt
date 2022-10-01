// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFEATUREGROUPREQUEST_P_H
#define QTAWS_DELETEFEATUREGROUPREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "deletefeaturegrouprequest.h"

namespace QtAws {
namespace SageMaker {

class DeleteFeatureGroupRequest;

class DeleteFeatureGroupRequestPrivate : public SageMakerRequestPrivate {

public:
    DeleteFeatureGroupRequestPrivate(const SageMakerRequest::Action action,
                                   DeleteFeatureGroupRequest * const q);
    DeleteFeatureGroupRequestPrivate(const DeleteFeatureGroupRequestPrivate &other,
                                   DeleteFeatureGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFeatureGroupRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
