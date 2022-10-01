// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPUBLICKEYSRESPONSE_P_H
#define QTAWS_LISTPUBLICKEYSRESPONSE_P_H

#include "cloudtrailresponse_p.h"

namespace QtAws {
namespace CloudTrail {

class ListPublicKeysResponse;

class ListPublicKeysResponsePrivate : public CloudTrailResponsePrivate {

public:

    explicit ListPublicKeysResponsePrivate(ListPublicKeysResponse * const q);

    void parseListPublicKeysResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPublicKeysResponse)
    Q_DISABLE_COPY(ListPublicKeysResponsePrivate)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
