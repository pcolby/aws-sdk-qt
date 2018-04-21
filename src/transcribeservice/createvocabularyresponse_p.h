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

#ifndef QTAWS_CREATEVOCABULARYRESPONSE_P_H
#define QTAWS_CREATEVOCABULARYRESPONSE_P_H

#include "transcribeserviceresponse_p.h"

namespace QtAws {
namespace TranscribeService {

class CreateVocabularyResponse;

class QTAWS_EXPORT CreateVocabularyResponsePrivate : public TranscribeServiceResponsePrivate {
    Q_OBJECT

public:

    CreateVocabularyResponsePrivate(CreateVocabularyResponse * const q);

    void parseCreateVocabularyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateVocabularyResponse)
    Q_DISABLE_COPY(CreateVocabularyResponsePrivate)

};

} // namespace TranscribeService
} // namespace QtAws

#endif
