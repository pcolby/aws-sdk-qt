// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTTYPEREQUEST_P_H
#define QTAWS_TESTTYPEREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "testtyperequest.h"

namespace QtAws {
namespace CloudFormation {

class TestTypeRequest;

class TestTypeRequestPrivate : public CloudFormationRequestPrivate {

public:
    TestTypeRequestPrivate(const CloudFormationRequest::Action action,
                                   TestTypeRequest * const q);
    TestTypeRequestPrivate(const TestTypeRequestPrivate &other,
                                   TestTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(TestTypeRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
