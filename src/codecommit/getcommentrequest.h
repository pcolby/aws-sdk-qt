// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMMENTREQUEST_H
#define QTAWS_GETCOMMENTREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetCommentRequestPrivate;

class QTAWSCODECOMMIT_EXPORT GetCommentRequest : public CodeCommitRequest {

public:
    GetCommentRequest(const GetCommentRequest &other);
    GetCommentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCommentRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
