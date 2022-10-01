// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTENTRESPONSE_P_H
#define QTAWS_DELETECONTENTRESPONSE_P_H

#include "wisdomresponse_p.h"

namespace QtAws {
namespace Wisdom {

class DeleteContentResponse;

class DeleteContentResponsePrivate : public WisdomResponsePrivate {

public:

    explicit DeleteContentResponsePrivate(DeleteContentResponse * const q);

    void parseDeleteContentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteContentResponse)
    Q_DISABLE_COPY(DeleteContentResponsePrivate)

};

} // namespace Wisdom
} // namespace QtAws

#endif
