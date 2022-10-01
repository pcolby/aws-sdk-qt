// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATAVIEWREQUEST_P_H
#define QTAWS_GETDATAVIEWREQUEST_P_H

#include "finspacedatarequest_p.h"
#include "getdataviewrequest.h"

namespace QtAws {
namespace FinspaceData {

class GetDataViewRequest;

class GetDataViewRequestPrivate : public FinspaceDataRequestPrivate {

public:
    GetDataViewRequestPrivate(const FinspaceDataRequest::Action action,
                                   GetDataViewRequest * const q);
    GetDataViewRequestPrivate(const GetDataViewRequestPrivate &other,
                                   GetDataViewRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDataViewRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
