// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMACIESESSIONRESPONSE_P_H
#define QTAWS_GETMACIESESSIONRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class GetMacieSessionResponse;

class GetMacieSessionResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit GetMacieSessionResponsePrivate(GetMacieSessionResponse * const q);

    void parseGetMacieSessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMacieSessionResponse)
    Q_DISABLE_COPY(GetMacieSessionResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
