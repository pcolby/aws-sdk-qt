// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPULLREQUESTSTATUSREQUEST_H
#define QTAWS_UPDATEPULLREQUESTSTATUSREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class UpdatePullRequestStatusRequestPrivate;

class QTAWSCODECOMMIT_EXPORT UpdatePullRequestStatusRequest : public CodeCommitRequest {

public:
    UpdatePullRequestStatusRequest(const UpdatePullRequestStatusRequest &other);
    UpdatePullRequestStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePullRequestStatusRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
