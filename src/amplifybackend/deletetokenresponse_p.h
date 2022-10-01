// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETOKENRESPONSE_P_H
#define QTAWS_DELETETOKENRESPONSE_P_H

#include "amplifybackendresponse_p.h"

namespace QtAws {
namespace AmplifyBackend {

class DeleteTokenResponse;

class DeleteTokenResponsePrivate : public AmplifyBackendResponsePrivate {

public:

    explicit DeleteTokenResponsePrivate(DeleteTokenResponse * const q);

    void parseDeleteTokenResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTokenResponse)
    Q_DISABLE_COPY(DeleteTokenResponsePrivate)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
