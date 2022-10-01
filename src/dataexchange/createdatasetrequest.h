// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASETREQUEST_H
#define QTAWS_CREATEDATASETREQUEST_H

#include "dataexchangerequest.h"

namespace QtAws {
namespace DataExchange {

class CreateDataSetRequestPrivate;

class QTAWSDATAEXCHANGE_EXPORT CreateDataSetRequest : public DataExchangeRequest {

public:
    CreateDataSetRequest(const CreateDataSetRequest &other);
    CreateDataSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDataSetRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif
