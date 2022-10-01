// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIPMEDIAAPPLICATIONSRESPONSE_P_H
#define QTAWS_LISTSIPMEDIAAPPLICATIONSRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class ListSipMediaApplicationsResponse;

class ListSipMediaApplicationsResponsePrivate : public ChimeResponsePrivate {

public:

    explicit ListSipMediaApplicationsResponsePrivate(ListSipMediaApplicationsResponse * const q);

    void parseListSipMediaApplicationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSipMediaApplicationsResponse)
    Q_DISABLE_COPY(ListSipMediaApplicationsResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
