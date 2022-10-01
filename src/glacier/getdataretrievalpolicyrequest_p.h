// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATARETRIEVALPOLICYREQUEST_P_H
#define QTAWS_GETDATARETRIEVALPOLICYREQUEST_P_H

#include "glacierrequest_p.h"
#include "getdataretrievalpolicyrequest.h"

namespace QtAws {
namespace Glacier {

class GetDataRetrievalPolicyRequest;

class GetDataRetrievalPolicyRequestPrivate : public GlacierRequestPrivate {

public:
    GetDataRetrievalPolicyRequestPrivate(const GlacierRequest::Action action,
                                   GetDataRetrievalPolicyRequest * const q);
    GetDataRetrievalPolicyRequestPrivate(const GetDataRetrievalPolicyRequestPrivate &other,
                                   GetDataRetrievalPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDataRetrievalPolicyRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
