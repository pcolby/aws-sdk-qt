/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_STARTCONTENTMODERATIONRESPONSE_P_H
#define QTAWS_STARTCONTENTMODERATIONRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class StartContentModerationResponse;

class QTAWS_EXPORT StartContentModerationResponsePrivate : public RekognitionResponsePrivate {

public:

    StartContentModerationResponsePrivate(StartContentModerationResponse * const q);

    void parseStartContentModerationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartContentModerationResponse)
    Q_DISABLE_COPY(StartContentModerationResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif
