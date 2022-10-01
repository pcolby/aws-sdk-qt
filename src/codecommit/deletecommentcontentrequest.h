// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOMMENTCONTENTREQUEST_H
#define QTAWS_DELETECOMMENTCONTENTREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class DeleteCommentContentRequestPrivate;

class QTAWSCODECOMMIT_EXPORT DeleteCommentContentRequest : public CodeCommitRequest {

public:
    DeleteCommentContentRequest(const DeleteCommentContentRequest &other);
    DeleteCommentContentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCommentContentRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
