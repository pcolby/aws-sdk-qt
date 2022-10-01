// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTACTIONREQUEST_H
#define QTAWS_GETEVENTACTIONREQUEST_H

#include "dataexchangerequest.h"

namespace QtAws {
namespace DataExchange {

class GetEventActionRequestPrivate;

class QTAWSDATAEXCHANGE_EXPORT GetEventActionRequest : public DataExchangeRequest {

public:
    GetEventActionRequest(const GetEventActionRequest &other);
    GetEventActionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEventActionRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif
