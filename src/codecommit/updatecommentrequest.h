// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOMMENTREQUEST_H
#define QTAWS_UPDATECOMMENTREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class UpdateCommentRequestPrivate;

class QTAWSCODECOMMIT_EXPORT UpdateCommentRequest : public CodeCommitRequest {

public:
    UpdateCommentRequest(const UpdateCommentRequest &other);
    UpdateCommentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCommentRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
