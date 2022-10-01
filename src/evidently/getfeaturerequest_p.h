// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFEATUREREQUEST_P_H
#define QTAWS_GETFEATUREREQUEST_P_H

#include "evidentlyrequest_p.h"
#include "getfeaturerequest.h"

namespace QtAws {
namespace Evidently {

class GetFeatureRequest;

class GetFeatureRequestPrivate : public EvidentlyRequestPrivate {

public:
    GetFeatureRequestPrivate(const EvidentlyRequest::Action action,
                                   GetFeatureRequest * const q);
    GetFeatureRequestPrivate(const GetFeatureRequestPrivate &other,
                                   GetFeatureRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFeatureRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
