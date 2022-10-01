// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEXTENSIONVERSIONRESPONSE_P_H
#define QTAWS_GETEXTENSIONVERSIONRESPONSE_P_H

#include "gamesparksresponse_p.h"

namespace QtAws {
namespace GameSparks {

class GetExtensionVersionResponse;

class GetExtensionVersionResponsePrivate : public GameSparksResponsePrivate {

public:

    explicit GetExtensionVersionResponsePrivate(GetExtensionVersionResponse * const q);

    void parseGetExtensionVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetExtensionVersionResponse)
    Q_DISABLE_COPY(GetExtensionVersionResponsePrivate)

};

} // namespace GameSparks
} // namespace QtAws

#endif
