// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFIGURATIONSETTRACKINGOPTIONSRESPONSE_P_H
#define QTAWS_CREATECONFIGURATIONSETTRACKINGOPTIONSRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class CreateConfigurationSetTrackingOptionsResponse;

class CreateConfigurationSetTrackingOptionsResponsePrivate : public SesResponsePrivate {

public:

    explicit CreateConfigurationSetTrackingOptionsResponsePrivate(CreateConfigurationSetTrackingOptionsResponse * const q);

    void parseCreateConfigurationSetTrackingOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateConfigurationSetTrackingOptionsResponse)
    Q_DISABLE_COPY(CreateConfigurationSetTrackingOptionsResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
