// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKENDRESPONSE_P_H
#define QTAWS_CREATEBACKENDRESPONSE_P_H

#include "amplifybackendresponse_p.h"

namespace QtAws {
namespace AmplifyBackend {

class CreateBackendResponse;

class CreateBackendResponsePrivate : public AmplifyBackendResponsePrivate {

public:

    explicit CreateBackendResponsePrivate(CreateBackendResponse * const q);

    void parseCreateBackendResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateBackendResponse)
    Q_DISABLE_COPY(CreateBackendResponsePrivate)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
