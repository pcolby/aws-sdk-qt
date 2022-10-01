// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTREPOSITORYTRIGGERSREQUEST_H
#define QTAWS_TESTREPOSITORYTRIGGERSREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class TestRepositoryTriggersRequestPrivate;

class QTAWSCODECOMMIT_EXPORT TestRepositoryTriggersRequest : public CodeCommitRequest {

public:
    TestRepositoryTriggersRequest(const TestRepositoryTriggersRequest &other);
    TestRepositoryTriggersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TestRepositoryTriggersRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
