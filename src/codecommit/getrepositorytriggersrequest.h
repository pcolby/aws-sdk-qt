// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPOSITORYTRIGGERSREQUEST_H
#define QTAWS_GETREPOSITORYTRIGGERSREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetRepositoryTriggersRequestPrivate;

class QTAWSCODECOMMIT_EXPORT GetRepositoryTriggersRequest : public CodeCommitRequest {

public:
    GetRepositoryTriggersRequest(const GetRepositoryTriggersRequest &other);
    GetRepositoryTriggersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRepositoryTriggersRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
