// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGRANTSRESPONSE_P_H
#define QTAWS_LISTGRANTSRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class ListGrantsResponse;

class ListGrantsResponsePrivate : public KmsResponsePrivate {

public:

    explicit ListGrantsResponsePrivate(ListGrantsResponse * const q);

    void parseListGrantsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListGrantsResponse)
    Q_DISABLE_COPY(ListGrantsResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
