// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTENTRESPONSE_P_H
#define QTAWS_GETCONTENTRESPONSE_P_H

#include "wisdomresponse_p.h"

namespace QtAws {
namespace Wisdom {

class GetContentResponse;

class GetContentResponsePrivate : public WisdomResponsePrivate {

public:

    explicit GetContentResponsePrivate(GetContentResponse * const q);

    void parseGetContentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetContentResponse)
    Q_DISABLE_COPY(GetContentResponsePrivate)

};

} // namespace Wisdom
} // namespace QtAws

#endif
