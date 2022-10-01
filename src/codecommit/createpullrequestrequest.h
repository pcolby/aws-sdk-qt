// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPULLREQUESTREQUEST_H
#define QTAWS_CREATEPULLREQUESTREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class CreatePullRequestRequestPrivate;

class QTAWSCODECOMMIT_EXPORT CreatePullRequestRequest : public CodeCommitRequest {

public:
    CreatePullRequestRequest(const CreatePullRequestRequest &other);
    CreatePullRequestRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePullRequestRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
