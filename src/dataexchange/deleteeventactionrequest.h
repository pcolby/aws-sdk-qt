// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTACTIONREQUEST_H
#define QTAWS_DELETEEVENTACTIONREQUEST_H

#include "dataexchangerequest.h"

namespace QtAws {
namespace DataExchange {

class DeleteEventActionRequestPrivate;

class QTAWSDATAEXCHANGE_EXPORT DeleteEventActionRequest : public DataExchangeRequest {

public:
    DeleteEventActionRequest(const DeleteEventActionRequest &other);
    DeleteEventActionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEventActionRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif
