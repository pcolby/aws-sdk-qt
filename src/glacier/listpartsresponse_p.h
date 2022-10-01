// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPARTSRESPONSE_P_H
#define QTAWS_LISTPARTSRESPONSE_P_H

#include "glacierresponse_p.h"

namespace QtAws {
namespace Glacier {

class ListPartsResponse;

class ListPartsResponsePrivate : public GlacierResponsePrivate {

public:

    explicit ListPartsResponsePrivate(ListPartsResponse * const q);

    void parseListPartsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPartsResponse)
    Q_DISABLE_COPY(ListPartsResponsePrivate)

};

} // namespace Glacier
} // namespace QtAws

#endif
