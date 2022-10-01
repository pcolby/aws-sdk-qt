// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPERATIONDETAILRESPONSE_P_H
#define QTAWS_GETOPERATIONDETAILRESPONSE_P_H

#include "route53domainsresponse_p.h"

namespace QtAws {
namespace Route53Domains {

class GetOperationDetailResponse;

class GetOperationDetailResponsePrivate : public Route53DomainsResponsePrivate {

public:

    explicit GetOperationDetailResponsePrivate(GetOperationDetailResponse * const q);

    void parseGetOperationDetailResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetOperationDetailResponse)
    Q_DISABLE_COPY(GetOperationDetailResponsePrivate)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
