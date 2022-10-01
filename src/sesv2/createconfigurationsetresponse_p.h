// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFIGURATIONSETRESPONSE_P_H
#define QTAWS_CREATECONFIGURATIONSETRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class CreateConfigurationSetResponse;

class CreateConfigurationSetResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit CreateConfigurationSetResponsePrivate(CreateConfigurationSetResponse * const q);

    void parseCreateConfigurationSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateConfigurationSetResponse)
    Q_DISABLE_COPY(CreateConfigurationSetResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
