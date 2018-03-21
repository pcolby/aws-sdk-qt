/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DELETEIMPORTEDKEYMATERIALRESPONSE_P_H
#define QTAWS_DELETEIMPORTEDKEYMATERIALRESPONSE_P_H

#include "kmsresponse.h"
#include "deleteimportedkeymaterialrequest.h"

namespace AWS {

namespace KMS {

class DeleteImportedKeyMaterialResponse;

class QTAWS_EXPORT DeleteImportedKeyMaterialResponsePrivate : public KMSResponsePrivate {
    Q_OBJECT

public:

    DeleteImportedKeyMaterialResponsePrivate(DeleteImportedKeyMaterialResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteImportedKeyMaterialResponse)
    Q_DISABLE_COPY(DeleteImportedKeyMaterialResponsePrivate)

};

} // namespace KMS
} // namespace AWS

#endif
