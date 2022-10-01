// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROMPTSRESPONSE_P_H
#define QTAWS_LISTPROMPTSRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class ListPromptsResponse;

class ListPromptsResponsePrivate : public ConnectResponsePrivate {

public:

    explicit ListPromptsResponsePrivate(ListPromptsResponse * const q);

    void parseListPromptsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPromptsResponse)
    Q_DISABLE_COPY(ListPromptsResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
