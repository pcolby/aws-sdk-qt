// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTSYNTAXRESPONSE_P_H
#define QTAWS_DETECTSYNTAXRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class DetectSyntaxResponse;

class DetectSyntaxResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit DetectSyntaxResponsePrivate(DetectSyntaxResponse * const q);

    void parseDetectSyntaxResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetectSyntaxResponse)
    Q_DISABLE_COPY(DetectSyntaxResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
