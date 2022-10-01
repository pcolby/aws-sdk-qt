// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMMENTSFORCOMPAREDCOMMITREQUEST_H
#define QTAWS_GETCOMMENTSFORCOMPAREDCOMMITREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class GetCommentsForComparedCommitRequestPrivate;

class QTAWSCODECOMMIT_EXPORT GetCommentsForComparedCommitRequest : public CodeCommitRequest {

public:
    GetCommentsForComparedCommitRequest(const GetCommentsForComparedCommitRequest &other);
    GetCommentsForComparedCommitRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCommentsForComparedCommitRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
