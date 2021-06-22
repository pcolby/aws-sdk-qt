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

#ifndef QTAWS_PUTEXTERNALMODELREQUEST_P_H
#define QTAWS_PUTEXTERNALMODELREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "putexternalmodelrequest.h"

namespace QtAws {
namespace FraudDetector {

class PutExternalModelRequest;

class PutExternalModelRequestPrivate : public FraudDetectorRequestPrivate {

public:
    PutExternalModelRequestPrivate(const FraudDetectorRequest::Action action,
                                   PutExternalModelRequest * const q);
    PutExternalModelRequestPrivate(const PutExternalModelRequestPrivate &other,
                                   PutExternalModelRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutExternalModelRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
