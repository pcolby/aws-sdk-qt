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

#ifndef QTAWS_RECOGNIZETEXTREQUEST_P_H
#define QTAWS_RECOGNIZETEXTREQUEST_P_H

#include "lexruntimev2request_p.h"
#include "recognizetextrequest.h"

namespace QtAws {
namespace LexRuntimeV2 {

class RecognizeTextRequest;

class RecognizeTextRequestPrivate : public LexRuntimeV2RequestPrivate {

public:
    RecognizeTextRequestPrivate(const LexRuntimeV2Request::Action action,
                                   RecognizeTextRequest * const q);
    RecognizeTextRequestPrivate(const RecognizeTextRequestPrivate &other,
                                   RecognizeTextRequest * const q);

private:
    Q_DECLARE_PUBLIC(RecognizeTextRequest)

};

} // namespace LexRuntimeV2
} // namespace QtAws

#endif
