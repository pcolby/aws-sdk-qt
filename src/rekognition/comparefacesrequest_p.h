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

#ifndef QTAWS_COMPAREFACESREQUEST_P_H
#define QTAWS_COMPAREFACESREQUEST_P_H

#include "rekognitionrequest_p.h"
#include "comparefacesrequest.h"

namespace QtAws {
namespace Rekognition {

class CompareFacesRequest;

class QTAWS_EXPORT CompareFacesRequestPrivate : public RekognitionRequestPrivate {

public:
    CompareFacesRequestPrivate(const RekognitionRequest::Action action,
                                   CompareFacesRequest * const q);
    CompareFacesRequestPrivate(const CompareFacesRequestPrivate &other,
                                   CompareFacesRequest * const q);

private:
    Q_DECLARE_PUBLIC(CompareFacesRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
