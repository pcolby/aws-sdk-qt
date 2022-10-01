// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTUDIORESPONSE_P_H
#define QTAWS_CREATESTUDIORESPONSE_P_H

#include "nimbleresponse_p.h"

namespace QtAws {
namespace Nimble {

class CreateStudioResponse;

class CreateStudioResponsePrivate : public NimbleResponsePrivate {

public:

    explicit CreateStudioResponsePrivate(CreateStudioResponse * const q);

    void parseCreateStudioResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateStudioResponse)
    Q_DISABLE_COPY(CreateStudioResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
