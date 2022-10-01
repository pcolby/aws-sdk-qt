// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFINDINGSFILTERRESPONSE_P_H
#define QTAWS_CREATEFINDINGSFILTERRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class CreateFindingsFilterResponse;

class CreateFindingsFilterResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit CreateFindingsFilterResponsePrivate(CreateFindingsFilterResponse * const q);

    void parseCreateFindingsFilterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFindingsFilterResponse)
    Q_DISABLE_COPY(CreateFindingsFilterResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
