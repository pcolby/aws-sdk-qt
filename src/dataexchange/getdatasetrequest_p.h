// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATASETREQUEST_P_H
#define QTAWS_GETDATASETREQUEST_P_H

#include "dataexchangerequest_p.h"
#include "getdatasetrequest.h"

namespace QtAws {
namespace DataExchange {

class GetDataSetRequest;

class GetDataSetRequestPrivate : public DataExchangeRequestPrivate {

public:
    GetDataSetRequestPrivate(const DataExchangeRequest::Action action,
                                   GetDataSetRequest * const q);
    GetDataSetRequestPrivate(const GetDataSetRequestPrivate &other,
                                   GetDataSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDataSetRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif
