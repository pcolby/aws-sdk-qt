// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECOMMENDERRESPONSE_P_H
#define QTAWS_DESCRIBERECOMMENDERRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class DescribeRecommenderResponse;

class DescribeRecommenderResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit DescribeRecommenderResponsePrivate(DescribeRecommenderResponse * const q);

    void parseDescribeRecommenderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRecommenderResponse)
    Q_DISABLE_COPY(DescribeRecommenderResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif
