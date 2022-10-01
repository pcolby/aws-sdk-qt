// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONSOLEOUTPUTRESPONSE_P_H
#define QTAWS_GETCONSOLEOUTPUTRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class GetConsoleOutputResponse;

class GetConsoleOutputResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit GetConsoleOutputResponsePrivate(GetConsoleOutputResponse * const q);

    void parseGetConsoleOutputResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetConsoleOutputResponse)
    Q_DISABLE_COPY(GetConsoleOutputResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
