/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_STARTSIGNINGJOBRESPONSE_H
#define QTAWS_STARTSIGNINGJOBRESPONSE_H

#include "signerresponse.h"
#include "startsigningjobrequest.h"

namespace QtAws {
namespace signer {

class StartSigningJobResponsePrivate;

class QTAWS_EXPORT StartSigningJobResponse : public signerResponse {
    Q_OBJECT

public:
    StartSigningJobResponse(const StartSigningJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartSigningJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartSigningJobResponse)
    Q_DISABLE_COPY(StartSigningJobResponse)

};

} // namespace signer
} // namespace QtAws

#endif
