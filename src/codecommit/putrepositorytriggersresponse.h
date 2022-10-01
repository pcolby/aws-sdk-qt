// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREPOSITORYTRIGGERSRESPONSE_H
#define QTAWS_PUTREPOSITORYTRIGGERSRESPONSE_H

#include "codecommitresponse.h"
#include "putrepositorytriggersrequest.h"

namespace QtAws {
namespace CodeCommit {

class PutRepositoryTriggersResponsePrivate;

class QTAWSCODECOMMIT_EXPORT PutRepositoryTriggersResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    PutRepositoryTriggersResponse(const PutRepositoryTriggersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutRepositoryTriggersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRepositoryTriggersResponse)
    Q_DISABLE_COPY(PutRepositoryTriggersResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
