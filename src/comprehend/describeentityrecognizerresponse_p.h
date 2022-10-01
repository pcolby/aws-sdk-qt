// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENTITYRECOGNIZERRESPONSE_P_H
#define QTAWS_DESCRIBEENTITYRECOGNIZERRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class DescribeEntityRecognizerResponse;

class DescribeEntityRecognizerResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit DescribeEntityRecognizerResponsePrivate(DescribeEntityRecognizerResponse * const q);

    void parseDescribeEntityRecognizerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEntityRecognizerResponse)
    Q_DISABLE_COPY(DescribeEntityRecognizerResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
