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

#ifndef QTAWS_ENCRYPTRESPONSE_H
#define QTAWS_ENCRYPTRESPONSE_H

#include "kmsresponse.h"
#include "encryptrequest.h"

namespace AWS {

namespace kms {

class EncryptResponsePrivate;

class QTAWS_EXPORT EncryptResponse : public EncryptResponse {
    Q_OBJECT

public:
    EncryptResponse(const EncryptRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EncryptRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(EncryptResponse)
    Q_DISABLE_COPY(EncryptResponse)

};

} // namespace kms
} // namespace AWS

#endif
