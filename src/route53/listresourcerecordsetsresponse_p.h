// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCERECORDSETSRESPONSE_P_H
#define QTAWS_LISTRESOURCERECORDSETSRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class ListResourceRecordSetsResponse;

class ListResourceRecordSetsResponsePrivate : public Route53ResponsePrivate {

public:

    explicit ListResourceRecordSetsResponsePrivate(ListResourceRecordSetsResponse * const q);

    void parseListResourceRecordSetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListResourceRecordSetsResponse)
    Q_DISABLE_COPY(ListResourceRecordSetsResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif
