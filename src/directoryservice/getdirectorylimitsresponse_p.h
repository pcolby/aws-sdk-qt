// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDIRECTORYLIMITSRESPONSE_P_H
#define QTAWS_GETDIRECTORYLIMITSRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class GetDirectoryLimitsResponse;

class GetDirectoryLimitsResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit GetDirectoryLimitsResponsePrivate(GetDirectoryLimitsResponse * const q);

    void parseGetDirectoryLimitsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDirectoryLimitsResponse)
    Q_DISABLE_COPY(GetDirectoryLimitsResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
