// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASETREQUEST_P_H
#define QTAWS_UPDATEDATASETREQUEST_P_H

#include "dataexchangerequest_p.h"
#include "updatedatasetrequest.h"

namespace QtAws {
namespace DataExchange {

class UpdateDataSetRequest;

class UpdateDataSetRequestPrivate : public DataExchangeRequestPrivate {

public:
    UpdateDataSetRequestPrivate(const DataExchangeRequest::Action action,
                                   UpdateDataSetRequest * const q);
    UpdateDataSetRequestPrivate(const UpdateDataSetRequestPrivate &other,
                                   UpdateDataSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDataSetRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif
