// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTREPOSITORYTRIGGERSREQUEST_P_H
#define QTAWS_TESTREPOSITORYTRIGGERSREQUEST_P_H

#include "codecommitrequest_p.h"
#include "testrepositorytriggersrequest.h"

namespace QtAws {
namespace CodeCommit {

class TestRepositoryTriggersRequest;

class TestRepositoryTriggersRequestPrivate : public CodeCommitRequestPrivate {

public:
    TestRepositoryTriggersRequestPrivate(const CodeCommitRequest::Action action,
                                   TestRepositoryTriggersRequest * const q);
    TestRepositoryTriggersRequestPrivate(const TestRepositoryTriggersRequestPrivate &other,
                                   TestRepositoryTriggersRequest * const q);

private:
    Q_DECLARE_PUBLIC(TestRepositoryTriggersRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
