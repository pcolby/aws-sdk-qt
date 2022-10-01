// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTACTATTRIBUTESRESPONSE_P_H
#define QTAWS_GETCONTACTATTRIBUTESRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class GetContactAttributesResponse;

class GetContactAttributesResponsePrivate : public ConnectResponsePrivate {

public:

    explicit GetContactAttributesResponsePrivate(GetContactAttributesResponse * const q);

    void parseGetContactAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetContactAttributesResponse)
    Q_DISABLE_COPY(GetContactAttributesResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
