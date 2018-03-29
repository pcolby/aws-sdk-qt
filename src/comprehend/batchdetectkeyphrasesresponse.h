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

#ifndef QTAWS_BATCHDETECTKEYPHRASESRESPONSE_H
#define QTAWS_BATCHDETECTKEYPHRASESRESPONSE_H

#include "comprehendresponse.h"
#include "batchdetectkeyphrasesrequest.h"

namespace QtAws {
namespace Comprehend {

class BatchDetectKeyPhrasesResponsePrivate;

class QTAWS_EXPORT BatchDetectKeyPhrasesResponse : public ComprehendResponse {
    Q_OBJECT

public:
    BatchDetectKeyPhrasesResponse(const BatchDetectKeyPhrasesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDetectKeyPhrasesRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(BatchDetectKeyPhrasesResponse)
    Q_DISABLE_COPY(BatchDetectKeyPhrasesResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
