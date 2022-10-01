// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENVIRONMENTRESPONSE_P_H
#define QTAWS_CREATEENVIRONMENTRESPONSE_P_H

#include "m2response_p.h"

namespace QtAws {
namespace M2 {

class CreateEnvironmentResponse;

class CreateEnvironmentResponsePrivate : public M2ResponsePrivate {

public:

    explicit CreateEnvironmentResponsePrivate(CreateEnvironmentResponse * const q);

    void parseCreateEnvironmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateEnvironmentResponse)
    Q_DISABLE_COPY(CreateEnvironmentResponsePrivate)

};

} // namespace M2
} // namespace QtAws

#endif
