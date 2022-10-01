// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPLETELAYERUPLOADRESPONSE_P_H
#define QTAWS_COMPLETELAYERUPLOADRESPONSE_P_H

#include "ecrresponse_p.h"

namespace QtAws {
namespace Ecr {

class CompleteLayerUploadResponse;

class CompleteLayerUploadResponsePrivate : public EcrResponsePrivate {

public:

    explicit CompleteLayerUploadResponsePrivate(CompleteLayerUploadResponse * const q);

    void parseCompleteLayerUploadResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CompleteLayerUploadResponse)
    Q_DISABLE_COPY(CompleteLayerUploadResponsePrivate)

};

} // namespace Ecr
} // namespace QtAws

#endif
