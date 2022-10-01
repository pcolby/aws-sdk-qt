// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTROLEREQUEST_P_H
#define QTAWS_TESTROLEREQUEST_P_H

#include "elastictranscoderrequest_p.h"
#include "testrolerequest.h"

namespace QtAws {
namespace ElasticTranscoder {

class TestRoleRequest;

class TestRoleRequestPrivate : public ElasticTranscoderRequestPrivate {

public:
    TestRoleRequestPrivate(const ElasticTranscoderRequest::Action action,
                                   TestRoleRequest * const q);
    TestRoleRequestPrivate(const TestRoleRequestPrivate &other,
                                   TestRoleRequest * const q);

private:
    Q_DECLARE_PUBLIC(TestRoleRequest)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif
