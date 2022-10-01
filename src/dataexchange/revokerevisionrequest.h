// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKEREVISIONREQUEST_H
#define QTAWS_REVOKEREVISIONREQUEST_H

#include "dataexchangerequest.h"

namespace QtAws {
namespace DataExchange {

class RevokeRevisionRequestPrivate;

class QTAWSDATAEXCHANGE_EXPORT RevokeRevisionRequest : public DataExchangeRequest {

public:
    RevokeRevisionRequest(const RevokeRevisionRequest &other);
    RevokeRevisionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RevokeRevisionRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif
