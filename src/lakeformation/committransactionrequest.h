// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMMITTRANSACTIONREQUEST_H
#define QTAWS_COMMITTRANSACTIONREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class CommitTransactionRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT CommitTransactionRequest : public LakeFormationRequest {

public:
    CommitTransactionRequest(const CommitTransactionRequest &other);
    CommitTransactionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CommitTransactionRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
