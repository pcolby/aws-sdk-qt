// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENVIRONMENTRESPONSE_P_H
#define QTAWS_UPDATEENVIRONMENTRESPONSE_P_H

#include "m2response_p.h"

namespace QtAws {
namespace M2 {

class UpdateEnvironmentResponse;

class UpdateEnvironmentResponsePrivate : public M2ResponsePrivate {

public:

    explicit UpdateEnvironmentResponsePrivate(UpdateEnvironmentResponse * const q);

    void parseUpdateEnvironmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateEnvironmentResponse)
    Q_DISABLE_COPY(UpdateEnvironmentResponsePrivate)

};

} // namespace M2
} // namespace QtAws

#endif
