// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSENDQUOTAREQUEST_P_H
#define QTAWS_GETSENDQUOTAREQUEST_P_H

#include "sesrequest_p.h"
#include "getsendquotarequest.h"

namespace QtAws {
namespace Ses {

class GetSendQuotaRequest;

class GetSendQuotaRequestPrivate : public SesRequestPrivate {

public:
    GetSendQuotaRequestPrivate(const SesRequest::Action action,
                                   GetSendQuotaRequest * const q);
    GetSendQuotaRequestPrivate(const GetSendQuotaRequestPrivate &other,
                                   GetSendQuotaRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSendQuotaRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
