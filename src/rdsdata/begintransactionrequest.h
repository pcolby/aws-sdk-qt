// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BEGINTRANSACTIONREQUEST_H
#define QTAWS_BEGINTRANSACTIONREQUEST_H

#include "rdsdatarequest.h"

namespace QtAws {
namespace RdsData {

class BeginTransactionRequestPrivate;

class QTAWSRDSDATA_EXPORT BeginTransactionRequest : public RdsDataRequest {

public:
    BeginTransactionRequest(const BeginTransactionRequest &other);
    BeginTransactionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BeginTransactionRequest)

};

} // namespace RdsData
} // namespace QtAws

#endif
