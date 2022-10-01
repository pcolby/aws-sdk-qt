// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSETREQUEST_P_H
#define QTAWS_GETASSETREQUEST_P_H

#include "dataexchangerequest_p.h"
#include "getassetrequest.h"

namespace QtAws {
namespace DataExchange {

class GetAssetRequest;

class GetAssetRequestPrivate : public DataExchangeRequestPrivate {

public:
    GetAssetRequestPrivate(const DataExchangeRequest::Action action,
                                   GetAssetRequest * const q);
    GetAssetRequestPrivate(const GetAssetRequestPrivate &other,
                                   GetAssetRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAssetRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif
