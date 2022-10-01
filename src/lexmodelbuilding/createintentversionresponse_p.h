// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINTENTVERSIONRESPONSE_P_H
#define QTAWS_CREATEINTENTVERSIONRESPONSE_P_H

#include "lexmodelbuildingresponse_p.h"

namespace QtAws {
namespace LexModelBuilding {

class CreateIntentVersionResponse;

class CreateIntentVersionResponsePrivate : public LexModelBuildingResponsePrivate {

public:

    explicit CreateIntentVersionResponsePrivate(CreateIntentVersionResponse * const q);

    void parseCreateIntentVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateIntentVersionResponse)
    Q_DISABLE_COPY(CreateIntentVersionResponsePrivate)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
