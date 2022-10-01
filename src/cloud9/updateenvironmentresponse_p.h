// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENVIRONMENTRESPONSE_P_H
#define QTAWS_UPDATEENVIRONMENTRESPONSE_P_H

#include "cloud9response_p.h"

namespace QtAws {
namespace Cloud9 {

class UpdateEnvironmentResponse;

class UpdateEnvironmentResponsePrivate : public Cloud9ResponsePrivate {

public:

    explicit UpdateEnvironmentResponsePrivate(UpdateEnvironmentResponse * const q);

    void parseUpdateEnvironmentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateEnvironmentResponse)
    Q_DISABLE_COPY(UpdateEnvironmentResponsePrivate)

};

} // namespace Cloud9
} // namespace QtAws

#endif
