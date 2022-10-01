// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPULLREQUESTTITLEREQUEST_H
#define QTAWS_UPDATEPULLREQUESTTITLEREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class UpdatePullRequestTitleRequestPrivate;

class QTAWSCODECOMMIT_EXPORT UpdatePullRequestTitleRequest : public CodeCommitRequest {

public:
    UpdatePullRequestTitleRequest(const UpdatePullRequestTitleRequest &other);
    UpdatePullRequestTitleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePullRequestTitleRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
