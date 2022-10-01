// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELJOBREQUEST_H
#define QTAWS_CANCELJOBREQUEST_H

#include "dataexchangerequest.h"

namespace QtAws {
namespace DataExchange {

class CancelJobRequestPrivate;

class QTAWSDATAEXCHANGE_EXPORT CancelJobRequest : public DataExchangeRequest {

public:
    CancelJobRequest(const CancelJobRequest &other);
    CancelJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelJobRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif
