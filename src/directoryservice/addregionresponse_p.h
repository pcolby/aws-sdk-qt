// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDREGIONRESPONSE_P_H
#define QTAWS_ADDREGIONRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class AddRegionResponse;

class AddRegionResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit AddRegionResponsePrivate(AddRegionResponse * const q);

    void parseAddRegionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddRegionResponse)
    Q_DISABLE_COPY(AddRegionResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
