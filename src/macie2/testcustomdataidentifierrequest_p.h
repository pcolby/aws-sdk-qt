// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTCUSTOMDATAIDENTIFIERREQUEST_P_H
#define QTAWS_TESTCUSTOMDATAIDENTIFIERREQUEST_P_H

#include "macie2request_p.h"
#include "testcustomdataidentifierrequest.h"

namespace QtAws {
namespace Macie2 {

class TestCustomDataIdentifierRequest;

class TestCustomDataIdentifierRequestPrivate : public Macie2RequestPrivate {

public:
    TestCustomDataIdentifierRequestPrivate(const Macie2Request::Action action,
                                   TestCustomDataIdentifierRequest * const q);
    TestCustomDataIdentifierRequestPrivate(const TestCustomDataIdentifierRequestPrivate &other,
                                   TestCustomDataIdentifierRequest * const q);

private:
    Q_DECLARE_PUBLIC(TestCustomDataIdentifierRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
