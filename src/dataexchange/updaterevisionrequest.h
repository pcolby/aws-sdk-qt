// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREVISIONREQUEST_H
#define QTAWS_UPDATEREVISIONREQUEST_H

#include "dataexchangerequest.h"

namespace QtAws {
namespace DataExchange {

class UpdateRevisionRequestPrivate;

class QTAWSDATAEXCHANGE_EXPORT UpdateRevisionRequest : public DataExchangeRequest {

public:
    UpdateRevisionRequest(const UpdateRevisionRequest &other);
    UpdateRevisionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRevisionRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif
