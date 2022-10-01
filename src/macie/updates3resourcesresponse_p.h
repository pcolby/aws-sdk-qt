// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATES3RESOURCESRESPONSE_P_H
#define QTAWS_UPDATES3RESOURCESRESPONSE_P_H

#include "macieresponse_p.h"

namespace QtAws {
namespace Macie {

class UpdateS3ResourcesResponse;

class UpdateS3ResourcesResponsePrivate : public MacieResponsePrivate {

public:

    explicit UpdateS3ResourcesResponsePrivate(UpdateS3ResourcesResponse * const q);

    void parseUpdateS3ResourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateS3ResourcesResponse)
    Q_DISABLE_COPY(UpdateS3ResourcesResponsePrivate)

};

} // namespace Macie
} // namespace QtAws

#endif
