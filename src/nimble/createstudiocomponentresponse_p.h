// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTUDIOCOMPONENTRESPONSE_P_H
#define QTAWS_CREATESTUDIOCOMPONENTRESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class CreateStudioComponentResponse;

class CreateStudioComponentResponsePrivate : public NimbleResponsePrivate {

public:

    explicit CreateStudioComponentResponsePrivate(CreateStudioComponentResponse * const q);

    void parseCreateStudioComponentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateStudioComponentResponse)
    Q_DISABLE_COPY(CreateStudioComponentResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
