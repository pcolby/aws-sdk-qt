// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGURATIONSETTRACKINGOPTIONSRESPONSE_P_H
#define QTAWS_PUTCONFIGURATIONSETTRACKINGOPTIONSRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class PutConfigurationSetTrackingOptionsResponse;

class PutConfigurationSetTrackingOptionsResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit PutConfigurationSetTrackingOptionsResponsePrivate(PutConfigurationSetTrackingOptionsResponse * const q);

    void parsePutConfigurationSetTrackingOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutConfigurationSetTrackingOptionsResponse)
    Q_DISABLE_COPY(PutConfigurationSetTrackingOptionsResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
