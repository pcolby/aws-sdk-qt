// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTREPOSITORYTRIGGERSRESPONSE_H
#define QTAWS_TESTREPOSITORYTRIGGERSRESPONSE_H

#include "codecommitresponse.h"
#include "testrepositorytriggersrequest.h"

namespace QtAws {
namespace CodeCommit {

class TestRepositoryTriggersResponsePrivate;

class QTAWSCODECOMMIT_EXPORT TestRepositoryTriggersResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    TestRepositoryTriggersResponse(const TestRepositoryTriggersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TestRepositoryTriggersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TestRepositoryTriggersResponse)
    Q_DISABLE_COPY(TestRepositoryTriggersResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
