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

#ifndef QTAWS_LISTVOCABULARIESRESPONSE_H
#define QTAWS_LISTVOCABULARIESRESPONSE_H

#include "transcribeserviceresponse.h"
#include "listvocabulariesrequest.h"

namespace QtAws {
namespace TranscribeService {

class ListVocabulariesResponsePrivate;

class QTAWS_EXPORT ListVocabulariesResponse : public TranscribeServiceResponse {
    Q_OBJECT

public:
    ListVocabulariesResponse(const ListVocabulariesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListVocabulariesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVocabulariesResponse)
    Q_DISABLE_COPY(ListVocabulariesResponse)

};

} // namespace TranscribeService
} // namespace QtAws

#endif
