// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMMENTSFORCOMPAREDCOMMITRESPONSE_H
#define QTAWS_GETCOMMENTSFORCOMPAREDCOMMITRESPONSE_H

#include "codecommitresponse.h"
#include "getcommentsforcomparedcommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetCommentsForComparedCommitResponsePrivate;

class QTAWSCODECOMMIT_EXPORT GetCommentsForComparedCommitResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    GetCommentsForComparedCommitResponse(const GetCommentsForComparedCommitRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCommentsForComparedCommitRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCommentsForComparedCommitResponse)
    Q_DISABLE_COPY(GetCommentsForComparedCommitResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
