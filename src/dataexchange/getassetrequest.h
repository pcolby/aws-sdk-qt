// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSETREQUEST_H
#define QTAWS_GETASSETREQUEST_H

#include "dataexchangerequest.h"

namespace QtAws {
namespace DataExchange {

class GetAssetRequestPrivate;

class QTAWSDATAEXCHANGE_EXPORT GetAssetRequest : public DataExchangeRequest {

public:
    GetAssetRequest(const GetAssetRequest &other);
    GetAssetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAssetRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif
