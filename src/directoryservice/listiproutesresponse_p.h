// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIPROUTESRESPONSE_P_H
#define QTAWS_LISTIPROUTESRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class ListIpRoutesResponse;

class ListIpRoutesResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit ListIpRoutesResponsePrivate(ListIpRoutesResponse * const q);

    void parseListIpRoutesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListIpRoutesResponse)
    Q_DISABLE_COPY(ListIpRoutesResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
