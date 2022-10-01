// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSENDSTATISTICSREQUEST_P_H
#define QTAWS_GETSENDSTATISTICSREQUEST_P_H

#include "sesrequest_p.h"
#include "getsendstatisticsrequest.h"

namespace QtAws {
namespace Ses {

class GetSendStatisticsRequest;

class GetSendStatisticsRequestPrivate : public SesRequestPrivate {

public:
    GetSendStatisticsRequestPrivate(const SesRequest::Action action,
                                   GetSendStatisticsRequest * const q);
    GetSendStatisticsRequestPrivate(const GetSendStatisticsRequestPrivate &other,
                                   GetSendStatisticsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSendStatisticsRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
