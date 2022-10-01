// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTFUNCTIONREQUEST_P_H
#define QTAWS_TESTFUNCTIONREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "testfunctionrequest.h"

namespace QtAws {
namespace CloudFront {

class TestFunctionRequest;

class TestFunctionRequestPrivate : public CloudFrontRequestPrivate {

public:
    TestFunctionRequestPrivate(const CloudFrontRequest::Action action,
                                   TestFunctionRequest * const q);
    TestFunctionRequestPrivate(const TestFunctionRequestPrivate &other,
                                   TestFunctionRequest * const q);

private:
    Q_DECLARE_PUBLIC(TestFunctionRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
