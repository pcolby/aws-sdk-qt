// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBOTVERSIONRESPONSE_P_H
#define QTAWS_CREATEBOTVERSIONRESPONSE_P_H

#include "lexmodelbuildingresponse_p.h"

namespace QtAws {
namespace LexModelBuilding {

class CreateBotVersionResponse;

class CreateBotVersionResponsePrivate : public LexModelBuildingResponsePrivate {

public:

    explicit CreateBotVersionResponsePrivate(CreateBotVersionResponse * const q);

    void parseCreateBotVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateBotVersionResponse)
    Q_DISABLE_COPY(CreateBotVersionResponsePrivate)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
