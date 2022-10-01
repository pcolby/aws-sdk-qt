// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONSETTRACKINGOPTIONSRESPONSE_P_H
#define QTAWS_DELETECONFIGURATIONSETTRACKINGOPTIONSRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class DeleteConfigurationSetTrackingOptionsResponse;

class DeleteConfigurationSetTrackingOptionsResponsePrivate : public SesResponsePrivate {

public:

    explicit DeleteConfigurationSetTrackingOptionsResponsePrivate(DeleteConfigurationSetTrackingOptionsResponse * const q);

    void parseDeleteConfigurationSetTrackingOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteConfigurationSetTrackingOptionsResponse)
    Q_DISABLE_COPY(DeleteConfigurationSetTrackingOptionsResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
