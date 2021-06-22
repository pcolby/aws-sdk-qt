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

#ifndef QTAWS_UPDATEASSESSMENTREQUEST_P_H
#define QTAWS_UPDATEASSESSMENTREQUEST_P_H

#include "auditmanagerrequest_p.h"
#include "updateassessmentrequest.h"

namespace QtAws {
namespace AuditManager {

class UpdateAssessmentRequest;

class UpdateAssessmentRequestPrivate : public AuditManagerRequestPrivate {

public:
    UpdateAssessmentRequestPrivate(const AuditManagerRequest::Action action,
                                   UpdateAssessmentRequest * const q);
    UpdateAssessmentRequestPrivate(const UpdateAssessmentRequestPrivate &other,
                                   UpdateAssessmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAssessmentRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
