// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTESTRESPONSE_P_H
#define QTAWS_STARTTESTRESPONSE_P_H

#include "mgnresponse_p.h"

namespace QtAws {
namespace Mgn {

class StartTestResponse;

class StartTestResponsePrivate : public MgnResponsePrivate {

public:

    explicit StartTestResponsePrivate(StartTestResponse * const q);

    void parseStartTestResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartTestResponse)
    Q_DISABLE_COPY(StartTestResponsePrivate)

};

} // namespace Mgn
} // namespace QtAws

#endif
