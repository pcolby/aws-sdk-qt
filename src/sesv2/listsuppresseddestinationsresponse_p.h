// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUPPRESSEDDESTINATIONSRESPONSE_P_H
#define QTAWS_LISTSUPPRESSEDDESTINATIONSRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class ListSuppressedDestinationsResponse;

class ListSuppressedDestinationsResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit ListSuppressedDestinationsResponsePrivate(ListSuppressedDestinationsResponse * const q);

    void parseListSuppressedDestinationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSuppressedDestinationsResponse)
    Q_DISABLE_COPY(ListSuppressedDestinationsResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
