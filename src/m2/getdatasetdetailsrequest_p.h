// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATASETDETAILSREQUEST_P_H
#define QTAWS_GETDATASETDETAILSREQUEST_P_H

#include "m2request_p.h"
#include "getdatasetdetailsrequest.h"

namespace QtAws {
namespace M2 {

class GetDataSetDetailsRequest;

class GetDataSetDetailsRequestPrivate : public M2RequestPrivate {

public:
    GetDataSetDetailsRequestPrivate(const M2Request::Action action,
                                   GetDataSetDetailsRequest * const q);
    GetDataSetDetailsRequestPrivate(const GetDataSetDetailsRequestPrivate &other,
                                   GetDataSetDetailsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDataSetDetailsRequest)

};

} // namespace M2
} // namespace QtAws

#endif
