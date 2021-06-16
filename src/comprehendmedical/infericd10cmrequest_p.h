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

#ifndef QTAWS_INFERICD10CMREQUEST_P_H
#define QTAWS_INFERICD10CMREQUEST_P_H

#include "comprehendmedicalrequest_p.h"
#include "infericd10cmrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class InferICD10CMRequest;

class QTAWS_EXPORT InferICD10CMRequestPrivate : public ComprehendMedicalRequestPrivate {

public:
    InferICD10CMRequestPrivate(const ComprehendMedicalRequest::Action action,
                                   InferICD10CMRequest * const q);
    InferICD10CMRequestPrivate(const InferICD10CMRequestPrivate &other,
                                   InferICD10CMRequest * const q);

private:
    Q_DECLARE_PUBLIC(InferICD10CMRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
