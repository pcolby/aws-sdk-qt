// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGURATIONSETTRACKINGOPTIONSRESPONSE_P_H
#define QTAWS_UPDATECONFIGURATIONSETTRACKINGOPTIONSRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class UpdateConfigurationSetTrackingOptionsResponse;

class UpdateConfigurationSetTrackingOptionsResponsePrivate : public SesResponsePrivate {

public:

    explicit UpdateConfigurationSetTrackingOptionsResponsePrivate(UpdateConfigurationSetTrackingOptionsResponse * const q);

    void parseUpdateConfigurationSetTrackingOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateConfigurationSetTrackingOptionsResponse)
    Q_DISABLE_COPY(UpdateConfigurationSetTrackingOptionsResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
