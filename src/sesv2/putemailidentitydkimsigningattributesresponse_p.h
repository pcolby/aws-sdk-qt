// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEMAILIDENTITYDKIMSIGNINGATTRIBUTESRESPONSE_P_H
#define QTAWS_PUTEMAILIDENTITYDKIMSIGNINGATTRIBUTESRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class PutEmailIdentityDkimSigningAttributesResponse;

class PutEmailIdentityDkimSigningAttributesResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit PutEmailIdentityDkimSigningAttributesResponsePrivate(PutEmailIdentityDkimSigningAttributesResponse * const q);

    void parsePutEmailIdentityDkimSigningAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutEmailIdentityDkimSigningAttributesResponse)
    Q_DISABLE_COPY(PutEmailIdentityDkimSigningAttributesResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
