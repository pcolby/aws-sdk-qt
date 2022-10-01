// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPLATFORMAPPLICATIONSRESPONSE_P_H
#define QTAWS_LISTPLATFORMAPPLICATIONSRESPONSE_P_H

#include "snsresponse_p.h"

namespace QtAws {
namespace Sns {

class ListPlatformApplicationsResponse;

class ListPlatformApplicationsResponsePrivate : public SnsResponsePrivate {

public:

    explicit ListPlatformApplicationsResponsePrivate(ListPlatformApplicationsResponse * const q);

    void parseListPlatformApplicationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPlatformApplicationsResponse)
    Q_DISABLE_COPY(ListPlatformApplicationsResponsePrivate)

};

} // namespace Sns
} // namespace QtAws

#endif
