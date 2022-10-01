// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREVEALCONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATEREVEALCONFIGURATIONRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class UpdateRevealConfigurationResponse;

class UpdateRevealConfigurationResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit UpdateRevealConfigurationResponsePrivate(UpdateRevealConfigurationResponse * const q);

    void parseUpdateRevealConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRevealConfigurationResponse)
    Q_DISABLE_COPY(UpdateRevealConfigurationResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
