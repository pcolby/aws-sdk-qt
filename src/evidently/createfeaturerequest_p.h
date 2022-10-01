// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFEATUREREQUEST_P_H
#define QTAWS_CREATEFEATUREREQUEST_P_H

#include "evidentlyrequest_p.h"
#include "createfeaturerequest.h"

namespace QtAws {
namespace Evidently {

class CreateFeatureRequest;

class CreateFeatureRequestPrivate : public EvidentlyRequestPrivate {

public:
    CreateFeatureRequestPrivate(const EvidentlyRequest::Action action,
                                   CreateFeatureRequest * const q);
    CreateFeatureRequestPrivate(const CreateFeatureRequestPrivate &other,
                                   CreateFeatureRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFeatureRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
