// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBOTRESPONSE_P_H
#define QTAWS_CREATEBOTRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class CreateBotResponse;

class CreateBotResponsePrivate : public ChimeResponsePrivate {

public:

    explicit CreateBotResponsePrivate(CreateBotResponse * const q);

    void parseCreateBotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateBotResponse)
    Q_DISABLE_COPY(CreateBotResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
