// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDAPIASSETREQUEST_H
#define QTAWS_SENDAPIASSETREQUEST_H

#include "dataexchangerequest.h"

namespace QtAws {
namespace DataExchange {

class SendApiAssetRequestPrivate;

class QTAWSDATAEXCHANGE_EXPORT SendApiAssetRequest : public DataExchangeRequest {

public:
    SendApiAssetRequest(const SendApiAssetRequest &other);
    SendApiAssetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendApiAssetRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif
