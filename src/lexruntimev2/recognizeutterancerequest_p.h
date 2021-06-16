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

#ifndef QTAWS_RECOGNIZEUTTERANCEREQUEST_P_H
#define QTAWS_RECOGNIZEUTTERANCEREQUEST_P_H

#include "lexruntimev2request_p.h"
#include "recognizeutterancerequest.h"

namespace QtAws {
namespace LexRuntimeV2 {

class RecognizeUtteranceRequest;

class QTAWS_EXPORT RecognizeUtteranceRequestPrivate : public LexRuntimeV2RequestPrivate {

public:
    RecognizeUtteranceRequestPrivate(const LexRuntimeV2Request::Action action,
                                   RecognizeUtteranceRequest * const q);
    RecognizeUtteranceRequestPrivate(const RecognizeUtteranceRequestPrivate &other,
                                   RecognizeUtteranceRequest * const q);

private:
    Q_DECLARE_PUBLIC(RecognizeUtteranceRequest)

};

} // namespace LexRuntimeV2
} // namespace QtAws

#endif
