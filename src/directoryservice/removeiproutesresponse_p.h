// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEIPROUTESRESPONSE_P_H
#define QTAWS_REMOVEIPROUTESRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class RemoveIpRoutesResponse;

class RemoveIpRoutesResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit RemoveIpRoutesResponsePrivate(RemoveIpRoutesResponse * const q);

    void parseRemoveIpRoutesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveIpRoutesResponse)
    Q_DISABLE_COPY(RemoveIpRoutesResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
