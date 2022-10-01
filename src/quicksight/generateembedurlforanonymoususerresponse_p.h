// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEEMBEDURLFORANONYMOUSUSERRESPONSE_P_H
#define QTAWS_GENERATEEMBEDURLFORANONYMOUSUSERRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class GenerateEmbedUrlForAnonymousUserResponse;

class GenerateEmbedUrlForAnonymousUserResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit GenerateEmbedUrlForAnonymousUserResponsePrivate(GenerateEmbedUrlForAnonymousUserResponse * const q);

    void parseGenerateEmbedUrlForAnonymousUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GenerateEmbedUrlForAnonymousUserResponse)
    Q_DISABLE_COPY(GenerateEmbedUrlForAnonymousUserResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
