// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECOMMENDERSRESPONSE_P_H
#define QTAWS_LISTRECOMMENDERSRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class ListRecommendersResponse;

class ListRecommendersResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit ListRecommendersResponsePrivate(ListRecommendersResponse * const q);

    void parseListRecommendersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRecommendersResponse)
    Q_DISABLE_COPY(ListRecommendersResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif
