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

#ifndef QTAWS_GENERATERANDOMRESPONSE_P_H
#define QTAWS_GENERATERANDOMRESPONSE_P_H

#include "kmsresponse.h"
#include "generaterandomrequest.h"

namespace AWS {

namespace KMS {

class GenerateRandomResponse;

class QTAWS_EXPORT GenerateRandomResponsePrivate : public KMSResponsePrivate {
    Q_OBJECT

public:

    GenerateRandomResponsePrivate(GenerateRandomResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GenerateRandomResponse)
    Q_DISABLE_COPY(GenerateRandomResponsePrivate)

};

} // namespace KMS
} // namespace AWS

#endif
