// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFEATUREGROUPREQUEST_P_H
#define QTAWS_CREATEFEATUREGROUPREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createfeaturegrouprequest.h"

namespace QtAws {
namespace SageMaker {

class CreateFeatureGroupRequest;

class CreateFeatureGroupRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateFeatureGroupRequestPrivate(const SageMakerRequest::Action action,
                                   CreateFeatureGroupRequest * const q);
    CreateFeatureGroupRequestPrivate(const CreateFeatureGroupRequestPrivate &other,
                                   CreateFeatureGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFeatureGroupRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
