// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEMAILIDENTITYDKIMATTRIBUTESRESPONSE_P_H
#define QTAWS_PUTEMAILIDENTITYDKIMATTRIBUTESRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class PutEmailIdentityDkimAttributesResponse;

class PutEmailIdentityDkimAttributesResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit PutEmailIdentityDkimAttributesResponsePrivate(PutEmailIdentityDkimAttributesResponse * const q);

    void parsePutEmailIdentityDkimAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutEmailIdentityDkimAttributesResponse)
    Q_DISABLE_COPY(PutEmailIdentityDkimAttributesResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
