// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTBACKENDAUTHRESPONSE_P_H
#define QTAWS_IMPORTBACKENDAUTHRESPONSE_P_H

#include "amplifybackendresponse_p.h"

namespace QtAws {
namespace AmplifyBackend {

class ImportBackendAuthResponse;

class ImportBackendAuthResponsePrivate : public AmplifyBackendResponsePrivate {

public:

    explicit ImportBackendAuthResponsePrivate(ImportBackendAuthResponse * const q);

    void parseImportBackendAuthResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportBackendAuthResponse)
    Q_DISABLE_COPY(ImportBackendAuthResponsePrivate)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
