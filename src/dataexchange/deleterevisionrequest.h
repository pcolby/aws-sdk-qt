// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREVISIONREQUEST_H
#define QTAWS_DELETEREVISIONREQUEST_H

#include "dataexchangerequest.h"

namespace QtAws {
namespace DataExchange {

class DeleteRevisionRequestPrivate;

class QTAWSDATAEXCHANGE_EXPORT DeleteRevisionRequest : public DataExchangeRequest {

public:
    DeleteRevisionRequest(const DeleteRevisionRequest &other);
    DeleteRevisionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRevisionRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif
