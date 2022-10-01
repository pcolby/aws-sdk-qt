// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTALARMREQUEST_P_H
#define QTAWS_TESTALARMREQUEST_P_H

#include "lightsailrequest_p.h"
#include "testalarmrequest.h"

namespace QtAws {
namespace Lightsail {

class TestAlarmRequest;

class TestAlarmRequestPrivate : public LightsailRequestPrivate {

public:
    TestAlarmRequestPrivate(const LightsailRequest::Action action,
                                   TestAlarmRequest * const q);
    TestAlarmRequestPrivate(const TestAlarmRequestPrivate &other,
                                   TestAlarmRequest * const q);

private:
    Q_DECLARE_PUBLIC(TestAlarmRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
