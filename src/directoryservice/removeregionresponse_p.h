// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEREGIONRESPONSE_P_H
#define QTAWS_REMOVEREGIONRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class RemoveRegionResponse;

class RemoveRegionResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit RemoveRegionResponsePrivate(RemoveRegionResponse * const q);

    void parseRemoveRegionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveRegionResponse)
    Q_DISABLE_COPY(RemoveRegionResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
