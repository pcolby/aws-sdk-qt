// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTATTRIBUTESRESPONSE_P_H
#define QTAWS_UPDATECONTACTATTRIBUTESRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class UpdateContactAttributesResponse;

class UpdateContactAttributesResponsePrivate : public ConnectResponsePrivate {

public:

    explicit UpdateContactAttributesResponsePrivate(UpdateContactAttributesResponse * const q);

    void parseUpdateContactAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateContactAttributesResponse)
    Q_DISABLE_COPY(UpdateContactAttributesResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
