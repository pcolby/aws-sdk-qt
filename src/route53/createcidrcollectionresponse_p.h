// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECIDRCOLLECTIONRESPONSE_P_H
#define QTAWS_CREATECIDRCOLLECTIONRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class CreateCidrCollectionResponse;

class CreateCidrCollectionResponsePrivate : public Route53ResponsePrivate {

public:

    explicit CreateCidrCollectionResponsePrivate(CreateCidrCollectionResponse * const q);

    void parseCreateCidrCollectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCidrCollectionResponse)
    Q_DISABLE_COPY(CreateCidrCollectionResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif
