// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPLATFORMAPPLICATIONRESPONSE_P_H
#define QTAWS_CREATEPLATFORMAPPLICATIONRESPONSE_P_H

#include "snsresponse_p.h"

namespace QtAws {
namespace Sns {

class CreatePlatformApplicationResponse;

class CreatePlatformApplicationResponsePrivate : public SnsResponsePrivate {

public:

    explicit CreatePlatformApplicationResponsePrivate(CreatePlatformApplicationResponse * const q);

    void parseCreatePlatformApplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePlatformApplicationResponse)
    Q_DISABLE_COPY(CreatePlatformApplicationResponsePrivate)

};

} // namespace Sns
} // namespace QtAws

#endif
