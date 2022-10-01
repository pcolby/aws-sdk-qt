// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHANGECIDRCOLLECTIONRESPONSE_P_H
#define QTAWS_CHANGECIDRCOLLECTIONRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class ChangeCidrCollectionResponse;

class ChangeCidrCollectionResponsePrivate : public Route53ResponsePrivate {

public:

    explicit ChangeCidrCollectionResponsePrivate(ChangeCidrCollectionResponse * const q);

    void parseChangeCidrCollectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ChangeCidrCollectionResponse)
    Q_DISABLE_COPY(ChangeCidrCollectionResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif
