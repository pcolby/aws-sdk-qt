// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMMITTRANSACTIONREQUEST_H
#define QTAWS_COMMITTRANSACTIONREQUEST_H

#include "rdsdatarequest.h"

namespace QtAws {
namespace RdsData {

class CommitTransactionRequestPrivate;

class QTAWSRDSDATA_EXPORT CommitTransactionRequest : public RdsDataRequest {

public:
    CommitTransactionRequest(const CommitTransactionRequest &other);
    CommitTransactionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CommitTransactionRequest)

};

} // namespace RdsData
} // namespace QtAws

#endif
