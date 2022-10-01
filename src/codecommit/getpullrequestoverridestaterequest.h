// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPULLREQUESTOVERRIDESTATEREQUEST_H
#define QTAWS_GETPULLREQUESTOVERRIDESTATEREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetPullRequestOverrideStateRequestPrivate;

class QTAWSCODECOMMIT_EXPORT GetPullRequestOverrideStateRequest : public CodeCommitRequest {

public:
    GetPullRequestOverrideStateRequest(const GetPullRequestOverrideStateRequest &other);
    GetPullRequestOverrideStateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPullRequestOverrideStateRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
