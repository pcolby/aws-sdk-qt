// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGSFILTERRESPONSE_P_H
#define QTAWS_GETFINDINGSFILTERRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class GetFindingsFilterResponse;

class GetFindingsFilterResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit GetFindingsFilterResponsePrivate(GetFindingsFilterResponse * const q);

    void parseGetFindingsFilterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFindingsFilterResponse)
    Q_DISABLE_COPY(GetFindingsFilterResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
