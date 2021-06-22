/*
    Copyright 2013-2021 Paul Colby

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

#ifndef QTAWS_CREATEVOCABULARYREQUEST_P_H
#define QTAWS_CREATEVOCABULARYREQUEST_P_H

#include "transcribeservicerequest_p.h"
#include "createvocabularyrequest.h"

namespace QtAws {
namespace TranscribeService {

class CreateVocabularyRequest;

class CreateVocabularyRequestPrivate : public TranscribeServiceRequestPrivate {

public:
    CreateVocabularyRequestPrivate(const TranscribeServiceRequest::Action action,
                                   CreateVocabularyRequest * const q);
    CreateVocabularyRequestPrivate(const CreateVocabularyRequestPrivate &other,
                                   CreateVocabularyRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateVocabularyRequest)

};

} // namespace TranscribeService
} // namespace QtAws

#endif
