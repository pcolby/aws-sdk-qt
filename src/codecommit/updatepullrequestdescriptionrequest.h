// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPULLREQUESTDESCRIPTIONREQUEST_H
#define QTAWS_UPDATEPULLREQUESTDESCRIPTIONREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class UpdatePullRequestDescriptionRequestPrivate;

class QTAWSCODECOMMIT_EXPORT UpdatePullRequestDescriptionRequest : public CodeCommitRequest {

public:
    UpdatePullRequestDescriptionRequest(const UpdatePullRequestDescriptionRequest &other);
    UpdatePullRequestDescriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePullRequestDescriptionRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
