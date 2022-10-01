// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPULLREQUESTEVENTSREQUEST_H
#define QTAWS_DESCRIBEPULLREQUESTEVENTSREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class DescribePullRequestEventsRequestPrivate;

class QTAWSCODECOMMIT_EXPORT DescribePullRequestEventsRequest : public CodeCommitRequest {

public:
    DescribePullRequestEventsRequest(const DescribePullRequestEventsRequest &other);
    DescribePullRequestEventsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePullRequestEventsRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
