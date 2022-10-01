// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPULLREQUESTAPPROVALSTATESREQUEST_H
#define QTAWS_GETPULLREQUESTAPPROVALSTATESREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetPullRequestApprovalStatesRequestPrivate;

class QTAWSCODECOMMIT_EXPORT GetPullRequestApprovalStatesRequest : public CodeCommitRequest {

public:
    GetPullRequestApprovalStatesRequest(const GetPullRequestApprovalStatesRequest &other);
    GetPullRequestApprovalStatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPullRequestApprovalStatesRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
