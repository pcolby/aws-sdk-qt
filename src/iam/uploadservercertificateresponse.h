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

#ifndef QTAWS_UPLOADSERVERCERTIFICATERESPONSE_H
#define QTAWS_UPLOADSERVERCERTIFICATERESPONSE_H

#include "iamresponse.h"
#include "uploadservercertificaterequest.h"

namespace AWS {

namespace IAM {

class UploadServerCertificateResponsePrivate;

class QTAWS_EXPORT UploadServerCertificateResponse : public IAMResponse {
    Q_OBJECT

public:
    UploadServerCertificateResponse(const UploadServerCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UploadServerCertificateRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(UploadServerCertificateResponse)
    Q_DISABLE_COPY(UploadServerCertificateResponse)

};

} // namespace IAM
} // namespace AWS

#endif
