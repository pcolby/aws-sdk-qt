// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINPUTSRESPONSE_P_H
#define QTAWS_LISTINPUTSRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class ListInputsResponse;

class ListInputsResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit ListInputsResponsePrivate(ListInputsResponse * const q);

    void parseListInputsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListInputsResponse)
    Q_DISABLE_COPY(ListInputsResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
