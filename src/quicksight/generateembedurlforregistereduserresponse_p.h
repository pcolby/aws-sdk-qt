// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEEMBEDURLFORREGISTEREDUSERRESPONSE_P_H
#define QTAWS_GENERATEEMBEDURLFORREGISTEREDUSERRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class GenerateEmbedUrlForRegisteredUserResponse;

class GenerateEmbedUrlForRegisteredUserResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit GenerateEmbedUrlForRegisteredUserResponsePrivate(GenerateEmbedUrlForRegisteredUserResponse * const q);

    void parseGenerateEmbedUrlForRegisteredUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GenerateEmbedUrlForRegisteredUserResponse)
    Q_DISABLE_COPY(GenerateEmbedUrlForRegisteredUserResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
