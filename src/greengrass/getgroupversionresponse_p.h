// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPVERSIONRESPONSE_P_H
#define QTAWS_GETGROUPVERSIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class GetGroupVersionResponse;

class GetGroupVersionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit GetGroupVersionResponsePrivate(GetGroupVersionResponse * const q);

    void parseGetGroupVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetGroupVersionResponse)
    Q_DISABLE_COPY(GetGroupVersionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
