// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTANCEATTRIBUTESRESPONSE_P_H
#define QTAWS_LISTINSTANCEATTRIBUTESRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class ListInstanceAttributesResponse;

class ListInstanceAttributesResponsePrivate : public ConnectResponsePrivate {

public:

    explicit ListInstanceAttributesResponsePrivate(ListInstanceAttributesResponse * const q);

    void parseListInstanceAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListInstanceAttributesResponse)
    Q_DISABLE_COPY(ListInstanceAttributesResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
