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

#ifndef QTAWS_CREATEVOCABULARYRESPONSE_H
#define QTAWS_CREATEVOCABULARYRESPONSE_H

#include "transcribeserviceresponse.h"
#include "createvocabularyrequest.h"

namespace QtAws {
namespace TranscribeService {

class CreateVocabularyResponsePrivate;

class QTAWS_EXPORT CreateVocabularyResponse : public TranscribeServiceResponse {
    Q_OBJECT

public:
    CreateVocabularyResponse(const CreateVocabularyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateVocabularyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVocabularyResponse)
    Q_DISABLE_COPY(CreateVocabularyResponse)

};

} // namespace TranscribeService
} // namespace QtAws

#endif
