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

#ifndef QTAWS_UPDATEDETECTORVERSIONSTATUSREQUEST_P_H
#define QTAWS_UPDATEDETECTORVERSIONSTATUSREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "updatedetectorversionstatusrequest.h"

namespace QtAws {
namespace FraudDetector {

class UpdateDetectorVersionStatusRequest;

class UpdateDetectorVersionStatusRequestPrivate : public FraudDetectorRequestPrivate {

public:
    UpdateDetectorVersionStatusRequestPrivate(const FraudDetectorRequest::Action action,
                                   UpdateDetectorVersionStatusRequest * const q);
    UpdateDetectorVersionStatusRequestPrivate(const UpdateDetectorVersionStatusRequestPrivate &other,
                                   UpdateDetectorVersionStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDetectorVersionStatusRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
