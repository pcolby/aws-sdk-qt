// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOMMENDATIONSREQUEST_P_H
#define QTAWS_GETRECOMMENDATIONSREQUEST_P_H

#include "personalizeruntimerequest_p.h"
#include "getrecommendationsrequest.h"

namespace QtAws {
namespace PersonalizeRuntime {

class GetRecommendationsRequest;

class GetRecommendationsRequestPrivate : public PersonalizeRuntimeRequestPrivate {

public:
    GetRecommendationsRequestPrivate(const PersonalizeRuntimeRequest::Action action,
                                   GetRecommendationsRequest * const q);
    GetRecommendationsRequestPrivate(const GetRecommendationsRequestPrivate &other,
                                   GetRecommendationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRecommendationsRequest)

};

} // namespace PersonalizeRuntime
} // namespace QtAws

#endif
