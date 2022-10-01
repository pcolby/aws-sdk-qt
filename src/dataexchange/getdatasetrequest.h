// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATASETREQUEST_H
#define QTAWS_GETDATASETREQUEST_H

#include "dataexchangerequest.h"

namespace QtAws {
namespace DataExchange {

class GetDataSetRequestPrivate;

class QTAWSDATAEXCHANGE_EXPORT GetDataSetRequest : public DataExchangeRequest {

public:
    GetDataSetRequest(const GetDataSetRequest &other);
    GetDataSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDataSetRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif
