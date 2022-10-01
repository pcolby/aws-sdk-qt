// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLERESPONSE_P_H
#define QTAWS_ENABLERESPONSE_P_H

#include "inspector2response_p.h"

namespace QtAws {
namespace Inspector2 {

class EnableResponse;

class EnableResponsePrivate : public Inspector2ResponsePrivate {

public:

    explicit EnableResponsePrivate(EnableResponse * const q);

    void parseEnableResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableResponse)
    Q_DISABLE_COPY(EnableResponsePrivate)

};

} // namespace Inspector2
} // namespace QtAws

#endif
