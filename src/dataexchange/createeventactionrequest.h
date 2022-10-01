// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEVENTACTIONREQUEST_H
#define QTAWS_CREATEEVENTACTIONREQUEST_H

#include "dataexchangerequest.h"

namespace QtAws {
namespace DataExchange {

class CreateEventActionRequestPrivate;

class QTAWSDATAEXCHANGE_EXPORT CreateEventActionRequest : public DataExchangeRequest {

public:
    CreateEventActionRequest(const CreateEventActionRequest &other);
    CreateEventActionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEventActionRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif
