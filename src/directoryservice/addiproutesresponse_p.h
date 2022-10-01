// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDIPROUTESRESPONSE_P_H
#define QTAWS_ADDIPROUTESRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class AddIpRoutesResponse;

class AddIpRoutesResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit AddIpRoutesResponsePrivate(AddIpRoutesResponse * const q);

    void parseAddIpRoutesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddIpRoutesResponse)
    Q_DISABLE_COPY(AddIpRoutesResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
