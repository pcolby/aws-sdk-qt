// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREVISIONREQUEST_H
#define QTAWS_CREATEREVISIONREQUEST_H

#include "dataexchangerequest.h"

namespace QtAws {
namespace DataExchange {

class CreateRevisionRequestPrivate;

class QTAWSDATAEXCHANGE_EXPORT CreateRevisionRequest : public DataExchangeRequest {

public:
    CreateRevisionRequest(const CreateRevisionRequest &other);
    CreateRevisionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRevisionRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif
