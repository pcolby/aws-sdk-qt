// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRETIRABLEGRANTSRESPONSE_P_H
#define QTAWS_LISTRETIRABLEGRANTSRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class ListRetirableGrantsResponse;

class ListRetirableGrantsResponsePrivate : public KmsResponsePrivate {

public:

    explicit ListRetirableGrantsResponsePrivate(ListRetirableGrantsResponse * const q);

    void parseListRetirableGrantsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRetirableGrantsResponse)
    Q_DISABLE_COPY(ListRetirableGrantsResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
