// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREVEALCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETREVEALCONFIGURATIONRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class GetRevealConfigurationResponse;

class GetRevealConfigurationResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit GetRevealConfigurationResponsePrivate(GetRevealConfigurationResponse * const q);

    void parseGetRevealConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRevealConfigurationResponse)
    Q_DISABLE_COPY(GetRevealConfigurationResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
