// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLERESPONSE_P_H
#define QTAWS_DISABLERESPONSE_P_H

#include "inspector2response_p.h"

namespace QtAws {
namespace Inspector2 {

class DisableResponse;

class DisableResponsePrivate : public Inspector2ResponsePrivate {

public:

    explicit DisableResponsePrivate(DisableResponse * const q);

    void parseDisableResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableResponse)
    Q_DISABLE_COPY(DisableResponsePrivate)

};

} // namespace Inspector2
} // namespace QtAws

#endif
