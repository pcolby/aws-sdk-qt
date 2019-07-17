/*
    Copyright 2013-2019 Paul Colby

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

#ifndef QTAWS_PUTLEXICONREQUEST_P_H
#define QTAWS_PUTLEXICONREQUEST_P_H

#include "pollyrequest_p.h"
#include "putlexiconrequest.h"

namespace QtAws {
namespace Polly {

class PutLexiconRequest;

class QTAWS_EXPORT PutLexiconRequestPrivate : public PollyRequestPrivate {

public:
    PutLexiconRequestPrivate(const PollyRequest::Action action,
                                   PutLexiconRequest * const q);
    PutLexiconRequestPrivate(const PutLexiconRequestPrivate &other,
                                   PutLexiconRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutLexiconRequest)

};

} // namespace Polly
} // namespace QtAws

#endif
