// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFINDINGSFILTERRESPONSE_P_H
#define QTAWS_UPDATEFINDINGSFILTERRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class UpdateFindingsFilterResponse;

class UpdateFindingsFilterResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit UpdateFindingsFilterResponsePrivate(UpdateFindingsFilterResponse * const q);

    void parseUpdateFindingsFilterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFindingsFilterResponse)
    Q_DISABLE_COPY(UpdateFindingsFilterResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
