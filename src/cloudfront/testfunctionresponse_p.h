// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTFUNCTIONRESPONSE_P_H
#define QTAWS_TESTFUNCTIONRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class TestFunctionResponse;

class TestFunctionResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit TestFunctionResponsePrivate(TestFunctionResponse * const q);

    void parseTestFunctionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TestFunctionResponse)
    Q_DISABLE_COPY(TestFunctionResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
