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

#ifndef QTAWS_DESCRIBETRUSTEDADVISORCHECKRESULTRESPONSE_H
#define QTAWS_DESCRIBETRUSTEDADVISORCHECKRESULTRESPONSE_H

#include "supportresponse.h"
#include "describetrustedadvisorcheckresultrequest.h"

namespace AWS {

namespace support {

class DescribeTrustedAdvisorCheckResultResponsePrivate;

class QTAWS_EXPORT DescribeTrustedAdvisorCheckResultResponse : public DescribeTrustedAdvisorCheckResultResponse {
    Q_OBJECT

public:
    DescribeTrustedAdvisorCheckResultResponse(const DescribeTrustedAdvisorCheckResultRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTrustedAdvisorCheckResultRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DescribeTrustedAdvisorCheckResultResponse)
    Q_DISABLE_COPY(DescribeTrustedAdvisorCheckResultResponse)

};

} // namespace support
} // namespace AWS

#endif
