// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTCUSTOMDATAIDENTIFIERRESPONSE_P_H
#define QTAWS_TESTCUSTOMDATAIDENTIFIERRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class TestCustomDataIdentifierResponse;

class TestCustomDataIdentifierResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit TestCustomDataIdentifierResponsePrivate(TestCustomDataIdentifierResponse * const q);

    void parseTestCustomDataIdentifierResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TestCustomDataIdentifierResponse)
    Q_DISABLE_COPY(TestCustomDataIdentifierResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
