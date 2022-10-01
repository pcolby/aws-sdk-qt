// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTUDIOCOMPONENTRESPONSE_P_H
#define QTAWS_UPDATESTUDIOCOMPONENTRESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class UpdateStudioComponentResponse;

class UpdateStudioComponentResponsePrivate : public NimbleResponsePrivate {

public:

    explicit UpdateStudioComponentResponsePrivate(UpdateStudioComponentResponse * const q);

    void parseUpdateStudioComponentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateStudioComponentResponse)
    Q_DISABLE_COPY(UpdateStudioComponentResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
