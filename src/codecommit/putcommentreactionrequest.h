// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCOMMENTREACTIONREQUEST_H
#define QTAWS_PUTCOMMENTREACTIONREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class PutCommentReactionRequestPrivate;

class QTAWSCODECOMMIT_EXPORT PutCommentReactionRequest : public CodeCommitRequest {

public:
    PutCommentReactionRequest(const PutCommentReactionRequest &other);
    PutCommentReactionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutCommentReactionRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
