// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEMAILIDENTITYCONFIGURATIONSETATTRIBUTESRESPONSE_P_H
#define QTAWS_PUTEMAILIDENTITYCONFIGURATIONSETATTRIBUTESRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class PutEmailIdentityConfigurationSetAttributesResponse;

class PutEmailIdentityConfigurationSetAttributesResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit PutEmailIdentityConfigurationSetAttributesResponsePrivate(PutEmailIdentityConfigurationSetAttributesResponse * const q);

    void parsePutEmailIdentityConfigurationSetAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutEmailIdentityConfigurationSetAttributesResponse)
    Q_DISABLE_COPY(PutEmailIdentityConfigurationSetAttributesResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
