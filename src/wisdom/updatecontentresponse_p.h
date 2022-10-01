// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTENTRESPONSE_P_H
#define QTAWS_UPDATECONTENTRESPONSE_P_H

#include "wisdomresponse_p.h"

namespace QtAws {
namespace Wisdom {

class UpdateContentResponse;

class UpdateContentResponsePrivate : public WisdomResponsePrivate {

public:

    explicit UpdateContentResponsePrivate(UpdateContentResponse * const q);

    void parseUpdateContentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateContentResponse)
    Q_DISABLE_COPY(UpdateContentResponsePrivate)

};

} // namespace Wisdom
} // namespace QtAws

#endif
