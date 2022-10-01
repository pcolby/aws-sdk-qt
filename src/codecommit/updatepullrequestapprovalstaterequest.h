// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPULLREQUESTAPPROVALSTATEREQUEST_H
#define QTAWS_UPDATEPULLREQUESTAPPROVALSTATEREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class UpdatePullRequestApprovalStateRequestPrivate;

class QTAWSCODECOMMIT_EXPORT UpdatePullRequestApprovalStateRequest : public CodeCommitRequest {

public:
    UpdatePullRequestApprovalStateRequest(const UpdatePullRequestApprovalStateRequest &other);
    UpdatePullRequestApprovalStateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePullRequestApprovalStateRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
