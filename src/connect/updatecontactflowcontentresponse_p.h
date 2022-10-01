// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTFLOWCONTENTRESPONSE_P_H
#define QTAWS_UPDATECONTACTFLOWCONTENTRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class UpdateContactFlowContentResponse;

class UpdateContactFlowContentResponsePrivate : public ConnectResponsePrivate {

public:

    explicit UpdateContactFlowContentResponsePrivate(UpdateContactFlowContentResponse * const q);

    void parseUpdateContactFlowContentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateContactFlowContentResponse)
    Q_DISABLE_COPY(UpdateContactFlowContentResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
