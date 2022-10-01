// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHANGERESOURCERECORDSETSRESPONSE_P_H
#define QTAWS_CHANGERESOURCERECORDSETSRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class ChangeResourceRecordSetsResponse;

class ChangeResourceRecordSetsResponsePrivate : public Route53ResponsePrivate {

public:

    explicit ChangeResourceRecordSetsResponsePrivate(ChangeResourceRecordSetsResponse * const q);

    void parseChangeResourceRecordSetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ChangeResourceRecordSetsResponse)
    Q_DISABLE_COPY(ChangeResourceRecordSetsResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif
