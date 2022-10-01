// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGROUPVERSIONRESPONSE_P_H
#define QTAWS_CREATEGROUPVERSIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class CreateGroupVersionResponse;

class CreateGroupVersionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit CreateGroupVersionResponsePrivate(CreateGroupVersionResponse * const q);

    void parseCreateGroupVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateGroupVersionResponse)
    Q_DISABLE_COPY(CreateGroupVersionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
