// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMMENTREACTIONSREQUEST_H
#define QTAWS_GETCOMMENTREACTIONSREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetCommentReactionsRequestPrivate;

class QTAWSCODECOMMIT_EXPORT GetCommentReactionsRequest : public CodeCommitRequest {

public:
    GetCommentReactionsRequest(const GetCommentReactionsRequest &other);
    GetCommentReactionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCommentReactionsRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
