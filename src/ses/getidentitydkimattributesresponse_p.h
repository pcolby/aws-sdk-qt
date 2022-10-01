// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYDKIMATTRIBUTESRESPONSE_P_H
#define QTAWS_GETIDENTITYDKIMATTRIBUTESRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class GetIdentityDkimAttributesResponse;

class GetIdentityDkimAttributesResponsePrivate : public SesResponsePrivate {

public:

    explicit GetIdentityDkimAttributesResponsePrivate(GetIdentityDkimAttributesResponse * const q);

    void parseGetIdentityDkimAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetIdentityDkimAttributesResponse)
    Q_DISABLE_COPY(GetIdentityDkimAttributesResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
