// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENTITYRECOGNIZERRESPONSE_P_H
#define QTAWS_DELETEENTITYRECOGNIZERRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class DeleteEntityRecognizerResponse;

class DeleteEntityRecognizerResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit DeleteEntityRecognizerResponsePrivate(DeleteEntityRecognizerResponse * const q);

    void parseDeleteEntityRecognizerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEntityRecognizerResponse)
    Q_DISABLE_COPY(DeleteEntityRecognizerResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
