// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONSOLESCREENSHOTRESPONSE_P_H
#define QTAWS_GETCONSOLESCREENSHOTRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class GetConsoleScreenshotResponse;

class GetConsoleScreenshotResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit GetConsoleScreenshotResponsePrivate(GetConsoleScreenshotResponse * const q);

    void parseGetConsoleScreenshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetConsoleScreenshotResponse)
    Q_DISABLE_COPY(GetConsoleScreenshotResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
