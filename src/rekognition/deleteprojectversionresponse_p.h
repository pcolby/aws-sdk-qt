// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROJECTVERSIONRESPONSE_P_H
#define QTAWS_DELETEPROJECTVERSIONRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class DeleteProjectVersionResponse;

class DeleteProjectVersionResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit DeleteProjectVersionResponsePrivate(DeleteProjectVersionResponse * const q);

    void parseDeleteProjectVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteProjectVersionResponse)
    Q_DISABLE_COPY(DeleteProjectVersionResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif
