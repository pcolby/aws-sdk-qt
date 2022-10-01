// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOVERAGERESPONSE_P_H
#define QTAWS_LISTCOVERAGERESPONSE_P_H

#include "inspector2response_p.h"

namespace QtAws {
namespace Inspector2 {

class ListCoverageResponse;

class ListCoverageResponsePrivate : public Inspector2ResponsePrivate {

public:

    explicit ListCoverageResponsePrivate(ListCoverageResponse * const q);

    void parseListCoverageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCoverageResponse)
    Q_DISABLE_COPY(ListCoverageResponsePrivate)

};

} // namespace Inspector2
} // namespace QtAws

#endif
