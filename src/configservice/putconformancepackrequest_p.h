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

#ifndef QTAWS_PUTCONFORMANCEPACKREQUEST_P_H
#define QTAWS_PUTCONFORMANCEPACKREQUEST_P_H

#include "configservicerequest_p.h"
#include "putconformancepackrequest.h"

namespace QtAws {
namespace ConfigService {

class PutConformancePackRequest;

class QTAWS_EXPORT PutConformancePackRequestPrivate : public ConfigServiceRequestPrivate {

public:
    PutConformancePackRequestPrivate(const ConfigServiceRequest::Action action,
                                   PutConformancePackRequest * const q);
    PutConformancePackRequestPrivate(const PutConformancePackRequestPrivate &other,
                                   PutConformancePackRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutConformancePackRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
