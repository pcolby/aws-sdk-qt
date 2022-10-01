// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMMITRESPONSE_H
#define QTAWS_GETCOMMITRESPONSE_H

#include "codecommitresponse.h"
#include "getcommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetCommitResponsePrivate;

class QTAWSCODECOMMIT_EXPORT GetCommitResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    GetCommitResponse(const GetCommitRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCommitRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCommitResponse)
    Q_DISABLE_COPY(GetCommitResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
