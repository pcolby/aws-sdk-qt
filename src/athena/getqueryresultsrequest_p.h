// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUERYRESULTSREQUEST_P_H
#define QTAWS_GETQUERYRESULTSREQUEST_P_H

#include "athenarequest_p.h"
#include "getqueryresultsrequest.h"

namespace QtAws {
namespace Athena {

class GetQueryResultsRequest;

class GetQueryResultsRequestPrivate : public AthenaRequestPrivate {

public:
    GetQueryResultsRequestPrivate(const AthenaRequest::Action action,
                                   GetQueryResultsRequest * const q);
    GetQueryResultsRequestPrivate(const GetQueryResultsRequestPrivate &other,
                                   GetQueryResultsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetQueryResultsRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
