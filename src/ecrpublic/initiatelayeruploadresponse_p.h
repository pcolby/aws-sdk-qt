// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIATELAYERUPLOADRESPONSE_P_H
#define QTAWS_INITIATELAYERUPLOADRESPONSE_P_H

#include "ecrpublicresponse_p.h"

namespace QtAws {
namespace EcrPublic {

class InitiateLayerUploadResponse;

class InitiateLayerUploadResponsePrivate : public EcrPublicResponsePrivate {

public:

    explicit InitiateLayerUploadResponsePrivate(InitiateLayerUploadResponse * const q);

    void parseInitiateLayerUploadResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(InitiateLayerUploadResponse)
    Q_DISABLE_COPY(InitiateLayerUploadResponsePrivate)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
