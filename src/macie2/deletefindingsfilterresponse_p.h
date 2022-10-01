// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFINDINGSFILTERRESPONSE_P_H
#define QTAWS_DELETEFINDINGSFILTERRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class DeleteFindingsFilterResponse;

class DeleteFindingsFilterResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit DeleteFindingsFilterResponsePrivate(DeleteFindingsFilterResponse * const q);

    void parseDeleteFindingsFilterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFindingsFilterResponse)
    Q_DISABLE_COPY(DeleteFindingsFilterResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
