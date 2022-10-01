// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASETREQUEST_P_H
#define QTAWS_CREATEDATASETREQUEST_P_H

#include "dataexchangerequest_p.h"
#include "createdatasetrequest.h"

namespace QtAws {
namespace DataExchange {

class CreateDataSetRequest;

class CreateDataSetRequestPrivate : public DataExchangeRequestPrivate {

public:
    CreateDataSetRequestPrivate(const DataExchangeRequest::Action action,
                                   CreateDataSetRequest * const q);
    CreateDataSetRequestPrivate(const CreateDataSetRequestPrivate &other,
                                   CreateDataSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDataSetRequest)

};

} // namespace DataExchange
} // namespace QtAws

#endif
