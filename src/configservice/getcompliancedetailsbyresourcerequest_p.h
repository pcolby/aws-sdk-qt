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

#ifndef QTAWS_GETCOMPLIANCEDETAILSBYRESOURCEREQUEST_P_H
#define QTAWS_GETCOMPLIANCEDETAILSBYRESOURCEREQUEST_P_H

#include "configservicerequest_p.h"
#include "getcompliancedetailsbyresourcerequest.h"

namespace QtAws {
namespace ConfigService {

class GetComplianceDetailsByResourceRequest;

class QTAWS_EXPORT GetComplianceDetailsByResourceRequestPrivate : public ConfigServiceRequestPrivate {

public:
    GetComplianceDetailsByResourceRequestPrivate(const ConfigServiceRequest::Action action,
                                   GetComplianceDetailsByResourceRequest * const q);
    GetComplianceDetailsByResourceRequestPrivate(const GetComplianceDetailsByResourceRequestPrivate &other,
                                   GetComplianceDetailsByResourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetComplianceDetailsByResourceRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
