// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEALGORITHMRESPONSE_P_H
#define QTAWS_DESCRIBEALGORITHMRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class DescribeAlgorithmResponse;

class DescribeAlgorithmResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit DescribeAlgorithmResponsePrivate(DescribeAlgorithmResponse * const q);

    void parseDescribeAlgorithmResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAlgorithmResponse)
    Q_DISABLE_COPY(DescribeAlgorithmResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif
