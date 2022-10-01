// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEMACIERESPONSE_P_H
#define QTAWS_ENABLEMACIERESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class EnableMacieResponse;

class EnableMacieResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit EnableMacieResponsePrivate(EnableMacieResponse * const q);

    void parseEnableMacieResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableMacieResponse)
    Q_DISABLE_COPY(EnableMacieResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
