// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENDPOINTATTRIBUTESRESPONSE_P_H
#define QTAWS_GETENDPOINTATTRIBUTESRESPONSE_P_H

#include "snsresponse_p.h"

namespace QtAws {
namespace Sns {

class GetEndpointAttributesResponse;

class GetEndpointAttributesResponsePrivate : public SnsResponsePrivate {

public:

    explicit GetEndpointAttributesResponsePrivate(GetEndpointAttributesResponse * const q);

    void parseGetEndpointAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEndpointAttributesResponse)
    Q_DISABLE_COPY(GetEndpointAttributesResponsePrivate)

};

} // namespace Sns
} // namespace QtAws

#endif
