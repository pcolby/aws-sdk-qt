/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_GETLABELDETECTIONRESPONSE_P_H
#define QTAWS_GETLABELDETECTIONRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class GetLabelDetectionResponse;

class QTAWS_EXPORT GetLabelDetectionResponsePrivate : public RekognitionResponsePrivate {

public:

    GetLabelDetectionResponsePrivate(GetLabelDetectionResponse * const q);

    void parseGetLabelDetectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLabelDetectionResponse)
    Q_DISABLE_COPY(GetLabelDetectionResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif
