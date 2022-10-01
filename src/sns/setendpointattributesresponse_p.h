// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETENDPOINTATTRIBUTESRESPONSE_P_H
#define QTAWS_SETENDPOINTATTRIBUTESRESPONSE_P_H

#include "snsresponse_p.h"

namespace QtAws {
namespace Sns {

class SetEndpointAttributesResponse;

class SetEndpointAttributesResponsePrivate : public SnsResponsePrivate {

public:

    explicit SetEndpointAttributesResponsePrivate(SetEndpointAttributesResponse * const q);

    void parseSetEndpointAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetEndpointAttributesResponse)
    Q_DISABLE_COPY(SetEndpointAttributesResponsePrivate)

};

} // namespace Sns
} // namespace QtAws

#endif
