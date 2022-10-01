// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINPUTRESPONSE_P_H
#define QTAWS_UPDATEINPUTRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class UpdateInputResponse;

class UpdateInputResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit UpdateInputResponsePrivate(UpdateInputResponse * const q);

    void parseUpdateInputResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateInputResponse)
    Q_DISABLE_COPY(UpdateInputResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
