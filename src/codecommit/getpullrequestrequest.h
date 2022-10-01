// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPULLREQUESTREQUEST_H
#define QTAWS_GETPULLREQUESTREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetPullRequestRequestPrivate;

class QTAWSCODECOMMIT_EXPORT GetPullRequestRequest : public CodeCommitRequest {

public:
    GetPullRequestRequest(const GetPullRequestRequest &other);
    GetPullRequestRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPullRequestRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
