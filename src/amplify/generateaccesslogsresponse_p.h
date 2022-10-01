// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEACCESSLOGSRESPONSE_P_H
#define QTAWS_GENERATEACCESSLOGSRESPONSE_P_H

#include "amplifyresponse_p.h"

namespace QtAws {
namespace Amplify {

class GenerateAccessLogsResponse;

class GenerateAccessLogsResponsePrivate : public AmplifyResponsePrivate {

public:

    explicit GenerateAccessLogsResponsePrivate(GenerateAccessLogsResponse * const q);

    void parseGenerateAccessLogsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GenerateAccessLogsResponse)
    Q_DISABLE_COPY(GenerateAccessLogsResponsePrivate)

};

} // namespace Amplify
} // namespace QtAws

#endif
