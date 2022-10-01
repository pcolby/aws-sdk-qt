// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKENDAPIRESPONSE_P_H
#define QTAWS_DELETEBACKENDAPIRESPONSE_P_H

#include "amplifybackendresponse_p.h"

namespace QtAws {
namespace AmplifyBackend {

class DeleteBackendAPIResponse;

class DeleteBackendAPIResponsePrivate : public AmplifyBackendResponsePrivate {

public:

    explicit DeleteBackendAPIResponsePrivate(DeleteBackendAPIResponse * const q);

    void parseDeleteBackendAPIResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBackendAPIResponse)
    Q_DISABLE_COPY(DeleteBackendAPIResponsePrivate)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
