// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGSRESPONSE_P_H
#define QTAWS_GETFINDINGSRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class GetFindingsResponse;

class GetFindingsResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit GetFindingsResponsePrivate(GetFindingsResponse * const q);

    void parseGetFindingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFindingsResponse)
    Q_DISABLE_COPY(GetFindingsResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
