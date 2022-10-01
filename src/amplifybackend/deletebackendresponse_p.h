// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKENDRESPONSE_P_H
#define QTAWS_DELETEBACKENDRESPONSE_P_H

#include "amplifybackendresponse_p.h"

namespace QtAws {
namespace AmplifyBackend {

class DeleteBackendResponse;

class DeleteBackendResponsePrivate : public AmplifyBackendResponsePrivate {

public:

    explicit DeleteBackendResponsePrivate(DeleteBackendResponse * const q);

    void parseDeleteBackendResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBackendResponse)
    Q_DISABLE_COPY(DeleteBackendResponsePrivate)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
