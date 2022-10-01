// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MERGEPULLREQUESTBYFASTFORWARDREQUEST_H
#define QTAWS_MERGEPULLREQUESTBYFASTFORWARDREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class MergePullRequestByFastForwardRequestPrivate;

class QTAWSCODECOMMIT_EXPORT MergePullRequestByFastForwardRequest : public CodeCommitRequest {

public:
    MergePullRequestByFastForwardRequest(const MergePullRequestByFastForwardRequest &other);
    MergePullRequestByFastForwardRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MergePullRequestByFastForwardRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
