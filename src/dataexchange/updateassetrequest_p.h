// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSETREQUEST_P_H
#define QTAWS_UPDATEASSETREQUEST_P_H

#include "dataexchangerequest_p.h"
#include "updateassetrequest.h"

namespace QtAws {
namespace DataExchange {

class UpdateAssetRequest;

class UpdateAssetRequestPrivate : public DataExchangeRequestPrivate {

public:
    UpdateAssetRequestPrivate(const DataExchangeRequest::Action action,
                                   UpdateAssetRequest * const q);
    UpdateAssetRequestPrivate(const UpdateAssetRequestPrivate &other,
                                   UpdateAssetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAssetRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif
