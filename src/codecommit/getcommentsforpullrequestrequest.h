// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMMENTSFORPULLREQUESTREQUEST_H
#define QTAWS_GETCOMMENTSFORPULLREQUESTREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetCommentsForPullRequestRequestPrivate;

class QTAWSCODECOMMIT_EXPORT GetCommentsForPullRequestRequest : public CodeCommitRequest {

public:
    GetCommentsForPullRequestRequest(const GetCommentsForPullRequestRequest &other);
    GetCommentsForPullRequestRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCommentsForPullRequestRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
