// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MERGEPULLREQUESTBYTHREEWAYREQUEST_H
#define QTAWS_MERGEPULLREQUESTBYTHREEWAYREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class MergePullRequestByThreeWayRequestPrivate;

class QTAWSCODECOMMIT_EXPORT MergePullRequestByThreeWayRequest : public CodeCommitRequest {

public:
    MergePullRequestByThreeWayRequest(const MergePullRequestByThreeWayRequest &other);
    MergePullRequestByThreeWayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MergePullRequestByThreeWayRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
