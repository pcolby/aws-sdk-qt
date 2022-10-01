// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTFLOWNAMERESPONSE_P_H
#define QTAWS_UPDATECONTACTFLOWNAMERESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class UpdateContactFlowNameResponse;

class UpdateContactFlowNameResponsePrivate : public ConnectResponsePrivate {

public:

    explicit UpdateContactFlowNameResponsePrivate(UpdateContactFlowNameResponse * const q);

    void parseUpdateContactFlowNameResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateContactFlowNameResponse)
    Q_DISABLE_COPY(UpdateContactFlowNameResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
