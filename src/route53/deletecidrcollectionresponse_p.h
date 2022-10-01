// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECIDRCOLLECTIONRESPONSE_P_H
#define QTAWS_DELETECIDRCOLLECTIONRESPONSE_P_H

#include "route53response_p.h"

namespace QtAws {
namespace Route53 {

class DeleteCidrCollectionResponse;

class DeleteCidrCollectionResponsePrivate : public Route53ResponsePrivate {

public:

    explicit DeleteCidrCollectionResponsePrivate(DeleteCidrCollectionResponse * const q);

    void parseDeleteCidrCollectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCidrCollectionResponse)
    Q_DISABLE_COPY(DeleteCidrCollectionResponsePrivate)

};

} // namespace Route53
} // namespace QtAws

#endif
