// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPUBLICKEYSRESPONSE_P_H
#define QTAWS_LISTPUBLICKEYSRESPONSE_P_H

#include "cloudfrontresponse_p.h"

namespace QtAws {
namespace CloudFront {

class ListPublicKeysResponse;

class ListPublicKeysResponsePrivate : public CloudFrontResponsePrivate {

public:

    explicit ListPublicKeysResponsePrivate(ListPublicKeysResponse * const q);

    void parseListPublicKeysResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPublicKeysResponse)
    Q_DISABLE_COPY(ListPublicKeysResponsePrivate)

};

} // namespace CloudFront
} // namespace QtAws

#endif
