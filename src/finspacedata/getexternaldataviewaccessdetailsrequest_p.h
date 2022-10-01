// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXTERNALDATAVIEWACCESSDETAILSREQUEST_P_H
#define QTAWS_GETEXTERNALDATAVIEWACCESSDETAILSREQUEST_P_H

#include "finspacedatarequest_p.h"
#include "getexternaldataviewaccessdetailsrequest.h"

namespace QtAws {
namespace FinspaceData {

class GetExternalDataViewAccessDetailsRequest;

class GetExternalDataViewAccessDetailsRequestPrivate : public FinspaceDataRequestPrivate {

public:
    GetExternalDataViewAccessDetailsRequestPrivate(const FinspaceDataRequest::Action action,
                                   GetExternalDataViewAccessDetailsRequest * const q);
    GetExternalDataViewAccessDetailsRequestPrivate(const GetExternalDataViewAccessDetailsRequestPrivate &other,
                                   GetExternalDataViewAccessDetailsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetExternalDataViewAccessDetailsRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
