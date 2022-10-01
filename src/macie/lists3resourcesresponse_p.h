// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTS3RESOURCESRESPONSE_P_H
#define QTAWS_LISTS3RESOURCESRESPONSE_P_H

#include "macieresponse_p.h"

namespace QtAws {
namespace Macie {

class ListS3ResourcesResponse;

class ListS3ResourcesResponsePrivate : public MacieResponsePrivate {

public:

    explicit ListS3ResourcesResponsePrivate(ListS3ResourcesResponse * const q);

    void parseListS3ResourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListS3ResourcesResponse)
    Q_DISABLE_COPY(ListS3ResourcesResponsePrivate)

};

} // namespace Macie
} // namespace QtAws

#endif
