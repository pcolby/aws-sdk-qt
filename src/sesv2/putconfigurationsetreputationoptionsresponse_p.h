// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGURATIONSETREPUTATIONOPTIONSRESPONSE_P_H
#define QTAWS_PUTCONFIGURATIONSETREPUTATIONOPTIONSRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class PutConfigurationSetReputationOptionsResponse;

class PutConfigurationSetReputationOptionsResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit PutConfigurationSetReputationOptionsResponsePrivate(PutConfigurationSetReputationOptionsResponse * const q);

    void parsePutConfigurationSetReputationOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutConfigurationSetReputationOptionsResponse)
    Q_DISABLE_COPY(PutConfigurationSetReputationOptionsResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
