// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTENTRESPONSE_P_H
#define QTAWS_CREATECONTENTRESPONSE_P_H

#include "wisdomresponse_p.h"

namespace QtAws {
namespace Wisdom {

class CreateContentResponse;

class CreateContentResponsePrivate : public WisdomResponsePrivate {

public:

    explicit CreateContentResponsePrivate(CreateContentResponse * const q);

    void parseCreateContentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateContentResponse)
    Q_DISABLE_COPY(CreateContentResponsePrivate)

};

} // namespace Wisdom
} // namespace QtAws

#endif
