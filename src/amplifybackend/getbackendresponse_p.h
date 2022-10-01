// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKENDRESPONSE_P_H
#define QTAWS_GETBACKENDRESPONSE_P_H

#include "amplifybackendresponse_p.h"

namespace QtAws {
namespace AmplifyBackend {

class GetBackendResponse;

class GetBackendResponsePrivate : public AmplifyBackendResponsePrivate {

public:

    explicit GetBackendResponsePrivate(GetBackendResponse * const q);

    void parseGetBackendResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBackendResponse)
    Q_DISABLE_COPY(GetBackendResponsePrivate)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
