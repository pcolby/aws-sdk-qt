// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSETREQUEST_P_H
#define QTAWS_DELETEASSETREQUEST_P_H

#include "dataexchangerequest_p.h"
#include "deleteassetrequest.h"

namespace QtAws {
namespace DataExchange {

class DeleteAssetRequest;

class DeleteAssetRequestPrivate : public DataExchangeRequestPrivate {

public:
    DeleteAssetRequestPrivate(const DataExchangeRequest::Action action,
                                   DeleteAssetRequest * const q);
    DeleteAssetRequestPrivate(const DeleteAssetRequestPrivate &other,
                                   DeleteAssetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAssetRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif
