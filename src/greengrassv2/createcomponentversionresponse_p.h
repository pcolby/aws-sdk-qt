// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOMPONENTVERSIONRESPONSE_P_H
#define QTAWS_CREATECOMPONENTVERSIONRESPONSE_P_H

#include "greengrassv2response_p.h"

namespace QtAws {
namespace GreengrassV2 {

class CreateComponentVersionResponse;

class CreateComponentVersionResponsePrivate : public GreengrassV2ResponsePrivate {

public:

    explicit CreateComponentVersionResponsePrivate(CreateComponentVersionResponse * const q);

    void parseCreateComponentVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateComponentVersionResponse)
    Q_DISABLE_COPY(CreateComponentVersionResponsePrivate)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
