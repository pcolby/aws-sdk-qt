// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBOTRESPONSE_P_H
#define QTAWS_UPDATEBOTRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class UpdateBotResponse;

class UpdateBotResponsePrivate : public ChimeResponsePrivate {

public:

    explicit UpdateBotResponsePrivate(UpdateBotResponse * const q);

    void parseUpdateBotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateBotResponse)
    Q_DISABLE_COPY(UpdateBotResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
