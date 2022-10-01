// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFEATUREGROUPREQUEST_P_H
#define QTAWS_UPDATEFEATUREGROUPREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "updatefeaturegrouprequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateFeatureGroupRequest;

class UpdateFeatureGroupRequestPrivate : public SageMakerRequestPrivate {

public:
    UpdateFeatureGroupRequestPrivate(const SageMakerRequest::Action action,
                                   UpdateFeatureGroupRequest * const q);
    UpdateFeatureGroupRequestPrivate(const UpdateFeatureGroupRequestPrivate &other,
                                   UpdateFeatureGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFeatureGroupRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
