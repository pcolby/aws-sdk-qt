// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROGRAMMATICACCESSCREDENTIALSRESPONSE_P_H
#define QTAWS_GETPROGRAMMATICACCESSCREDENTIALSRESPONSE_P_H

#include "finspacedataresponse_p.h"

namespace QtAws {
namespace FinspaceData {

class GetProgrammaticAccessCredentialsResponse;

class GetProgrammaticAccessCredentialsResponsePrivate : public FinspaceDataResponsePrivate {

public:

    explicit GetProgrammaticAccessCredentialsResponsePrivate(GetProgrammaticAccessCredentialsResponse * const q);

    void parseGetProgrammaticAccessCredentialsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetProgrammaticAccessCredentialsResponse)
    Q_DISABLE_COPY(GetProgrammaticAccessCredentialsResponsePrivate)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
