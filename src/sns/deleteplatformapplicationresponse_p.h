// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPLATFORMAPPLICATIONRESPONSE_P_H
#define QTAWS_DELETEPLATFORMAPPLICATIONRESPONSE_P_H

#include "snsresponse_p.h"

namespace QtAws {
namespace Sns {

class DeletePlatformApplicationResponse;

class DeletePlatformApplicationResponsePrivate : public SnsResponsePrivate {

public:

    explicit DeletePlatformApplicationResponsePrivate(DeletePlatformApplicationResponse * const q);

    void parseDeletePlatformApplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePlatformApplicationResponse)
    Q_DISABLE_COPY(DeletePlatformApplicationResponsePrivate)

};

} // namespace Sns
} // namespace QtAws

#endif
