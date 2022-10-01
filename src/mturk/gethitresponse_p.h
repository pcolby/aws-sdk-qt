// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHITRESPONSE_P_H
#define QTAWS_GETHITRESPONSE_P_H

#include "mturkresponse_p.h"

namespace QtAws {
namespace MTurk {

class GetHITResponse;

class GetHITResponsePrivate : public MTurkResponsePrivate {

public:

    explicit GetHITResponsePrivate(GetHITResponse * const q);

    void parseGetHITResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetHITResponse)
    Q_DISABLE_COPY(GetHITResponsePrivate)

};

} // namespace MTurk
} // namespace QtAws

#endif
