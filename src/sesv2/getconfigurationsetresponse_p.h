// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFIGURATIONSETRESPONSE_P_H
#define QTAWS_GETCONFIGURATIONSETRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class GetConfigurationSetResponse;

class GetConfigurationSetResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit GetConfigurationSetResponsePrivate(GetConfigurationSetResponse * const q);

    void parseGetConfigurationSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetConfigurationSetResponse)
    Q_DISABLE_COPY(GetConfigurationSetResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
