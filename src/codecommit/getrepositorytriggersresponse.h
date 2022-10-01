// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPOSITORYTRIGGERSRESPONSE_H
#define QTAWS_GETREPOSITORYTRIGGERSRESPONSE_H

#include "codecommitresponse.h"
#include "getrepositorytriggersrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetRepositoryTriggersResponsePrivate;

class QTAWSCODECOMMIT_EXPORT GetRepositoryTriggersResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    GetRepositoryTriggersResponse(const GetRepositoryTriggersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRepositoryTriggersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRepositoryTriggersResponse)
    Q_DISABLE_COPY(GetRepositoryTriggersResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
