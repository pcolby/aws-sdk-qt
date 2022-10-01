// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREPOSITORYTRIGGERSREQUEST_H
#define QTAWS_PUTREPOSITORYTRIGGERSREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class PutRepositoryTriggersRequestPrivate;

class QTAWSCODECOMMIT_EXPORT PutRepositoryTriggersRequest : public CodeCommitRequest {

public:
    PutRepositoryTriggersRequest(const PutRepositoryTriggersRequest &other);
    PutRepositoryTriggersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRepositoryTriggersRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
