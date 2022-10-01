// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINPUTRESPONSE_P_H
#define QTAWS_CREATEINPUTRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class CreateInputResponse;

class CreateInputResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit CreateInputResponsePrivate(CreateInputResponse * const q);

    void parseCreateInputResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateInputResponse)
    Q_DISABLE_COPY(CreateInputResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
