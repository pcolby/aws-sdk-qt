// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROLLBACKTRANSACTIONREQUEST_H
#define QTAWS_ROLLBACKTRANSACTIONREQUEST_H

#include "rdsdatarequest.h"

namespace QtAws {
namespace RdsData {

class RollbackTransactionRequestPrivate;

class QTAWSRDSDATA_EXPORT RollbackTransactionRequest : public RdsDataRequest {

public:
    RollbackTransactionRequest(const RollbackTransactionRequest &other);
    RollbackTransactionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RollbackTransactionRequest)

};

} // namespace RdsData
} // namespace QtAws

#endif
