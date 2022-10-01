// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOMMENDATIONSREQUEST_P_H
#define QTAWS_GETRECOMMENDATIONSREQUEST_P_H

#include "wisdomrequest_p.h"
#include "getrecommendationsrequest.h"

namespace QtAws {
namespace Wisdom {

class GetRecommendationsRequest;

class GetRecommendationsRequestPrivate : public WisdomRequestPrivate {

public:
    GetRecommendationsRequestPrivate(const WisdomRequest::Action action,
                                   GetRecommendationsRequest * const q);
    GetRecommendationsRequestPrivate(const GetRecommendationsRequestPrivate &other,
                                   GetRecommendationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRecommendationsRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
