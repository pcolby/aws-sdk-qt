// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBOTVERSIONRESPONSE_P_H
#define QTAWS_DELETEBOTVERSIONRESPONSE_P_H

#include "lexmodelbuildingresponse_p.h"

namespace QtAws {
namespace LexModelBuilding {

class DeleteBotVersionResponse;

class DeleteBotVersionResponsePrivate : public LexModelBuildingResponsePrivate {

public:

    explicit DeleteBotVersionResponsePrivate(DeleteBotVersionResponse * const q);

    void parseDeleteBotVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBotVersionResponse)
    Q_DISABLE_COPY(DeleteBotVersionResponsePrivate)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
