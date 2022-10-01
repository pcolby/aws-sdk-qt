// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELAGSREQUEST_P_H
#define QTAWS_DESCRIBELAGSREQUEST_P_H

#include "directconnectrequest_p.h"
#include "describelagsrequest.h"

namespace QtAws {
namespace DirectConnect {

class DescribeLagsRequest;

class DescribeLagsRequestPrivate : public DirectConnectRequestPrivate {

public:
    DescribeLagsRequestPrivate(const DirectConnectRequest::Action action,
                                   DescribeLagsRequest * const q);
    DescribeLagsRequestPrivate(const DescribeLagsRequestPrivate &other,
                                   DescribeLagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLagsRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
