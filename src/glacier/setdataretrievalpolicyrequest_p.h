// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETDATARETRIEVALPOLICYREQUEST_P_H
#define QTAWS_SETDATARETRIEVALPOLICYREQUEST_P_H

#include "glacierrequest_p.h"
#include "setdataretrievalpolicyrequest.h"

namespace QtAws {
namespace Glacier {

class SetDataRetrievalPolicyRequest;

class SetDataRetrievalPolicyRequestPrivate : public GlacierRequestPrivate {

public:
    SetDataRetrievalPolicyRequestPrivate(const GlacierRequest::Action action,
                                   SetDataRetrievalPolicyRequest * const q);
    SetDataRetrievalPolicyRequestPrivate(const SetDataRetrievalPolicyRequestPrivate &other,
                                   SetDataRetrievalPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetDataRetrievalPolicyRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
