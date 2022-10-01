// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINTENTVERSIONRESPONSE_P_H
#define QTAWS_DELETEINTENTVERSIONRESPONSE_P_H

#include "lexmodelbuildingresponse_p.h"

namespace QtAws {
namespace LexModelBuilding {

class DeleteIntentVersionResponse;

class DeleteIntentVersionResponsePrivate : public LexModelBuildingResponsePrivate {

public:

    explicit DeleteIntentVersionResponsePrivate(DeleteIntentVersionResponse * const q);

    void parseDeleteIntentVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteIntentVersionResponse)
    Q_DISABLE_COPY(DeleteIntentVersionResponsePrivate)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
