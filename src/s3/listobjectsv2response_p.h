/*
    Copyright 2013-2021 Paul Colby

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

#ifndef QTAWS_LISTOBJECTSV2RESPONSE_P_H
#define QTAWS_LISTOBJECTSV2RESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class ListObjectsV2Response;

class ListObjectsV2ResponsePrivate : public S3ResponsePrivate {

public:

    explicit ListObjectsV2ResponsePrivate(ListObjectsV2Response * const q);

    void parseListObjectsV2Response(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListObjectsV2Response)
    Q_DISABLE_COPY(ListObjectsV2ResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
