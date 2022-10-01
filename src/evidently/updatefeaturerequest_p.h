// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFEATUREREQUEST_P_H
#define QTAWS_UPDATEFEATUREREQUEST_P_H

#include "evidentlyrequest_p.h"
#include "updatefeaturerequest.h"

namespace QtAws {
namespace Evidently {

class UpdateFeatureRequest;

class UpdateFeatureRequestPrivate : public EvidentlyRequestPrivate {

public:
    UpdateFeatureRequestPrivate(const EvidentlyRequest::Action action,
                                   UpdateFeatureRequest * const q);
    UpdateFeatureRequestPrivate(const UpdateFeatureRequestPrivate &other,
                                   UpdateFeatureRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFeatureRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
