// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDAPIASSETREQUEST_P_H
#define QTAWS_SENDAPIASSETREQUEST_P_H

#include "dataexchangerequest_p.h"
#include "sendapiassetrequest.h"

namespace QtAws {
namespace DataExchange {

class SendApiAssetRequest;

class SendApiAssetRequestPrivate : public DataExchangeRequestPrivate {

public:
    SendApiAssetRequestPrivate(const DataExchangeRequest::Action action,
                                   SendApiAssetRequest * const q);
    SendApiAssetRequestPrivate(const SendApiAssetRequestPrivate &other,
                                   SendApiAssetRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendApiAssetRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif
