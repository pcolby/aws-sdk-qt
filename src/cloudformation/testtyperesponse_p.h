// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTTYPERESPONSE_P_H
#define QTAWS_TESTTYPERESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class TestTypeResponse;

class TestTypeResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit TestTypeResponsePrivate(TestTypeResponse * const q);

    void parseTestTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TestTypeResponse)
    Q_DISABLE_COPY(TestTypeResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
