/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_UPLOADMULTIPARTPARTRESPONSE_H
#define QTAWS_UPLOADMULTIPARTPARTRESPONSE_H

#include "glacierresponse.h"
#include "uploadmultipartpartrequest.h"

namespace QtAws {
namespace Glacier {

class UploadMultipartPartResponsePrivate;

class QTAWS_EXPORT UploadMultipartPartResponse : public GlacierResponse {
    Q_OBJECT

public:
    UploadMultipartPartResponse(const UploadMultipartPartRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UploadMultipartPartRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UploadMultipartPartResponse)
    Q_DISABLE_COPY(UploadMultipartPartResponse)

};

} // namespace Glacier
} // namespace QtAws

#endif
