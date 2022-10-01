// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENTITYRECOGNIZERRESPONSE_P_H
#define QTAWS_CREATEENTITYRECOGNIZERRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class CreateEntityRecognizerResponse;

class CreateEntityRecognizerResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit CreateEntityRecognizerResponsePrivate(CreateEntityRecognizerResponse * const q);

    void parseCreateEntityRecognizerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateEntityRecognizerResponse)
    Q_DISABLE_COPY(CreateEntityRecognizerResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
