// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONNECTORPROFILERESPONSE_P_H
#define QTAWS_DELETECONNECTORPROFILERESPONSE_P_H

#include "appflowresponse_p.h"

namespace QtAws {
namespace Appflow {

class DeleteConnectorProfileResponse;

class DeleteConnectorProfileResponsePrivate : public AppflowResponsePrivate {

public:

    explicit DeleteConnectorProfileResponsePrivate(DeleteConnectorProfileResponse * const q);

    void parseDeleteConnectorProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteConnectorProfileResponse)
    Q_DISABLE_COPY(DeleteConnectorProfileResponsePrivate)

};

} // namespace Appflow
} // namespace QtAws

#endif
