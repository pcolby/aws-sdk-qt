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

#ifndef QTAWS_DELETEEXPERIMENTTEMPLATEREQUEST_P_H
#define QTAWS_DELETEEXPERIMENTTEMPLATEREQUEST_P_H

#include "fisrequest_p.h"
#include "deleteexperimenttemplaterequest.h"

namespace QtAws {
namespace FIS {

class DeleteExperimentTemplateRequest;

class QTAWS_EXPORT DeleteExperimentTemplateRequestPrivate : public FisRequestPrivate {

public:
    DeleteExperimentTemplateRequestPrivate(const FisRequest::Action action,
                                   DeleteExperimentTemplateRequest * const q);
    DeleteExperimentTemplateRequestPrivate(const DeleteExperimentTemplateRequestPrivate &other,
                                   DeleteExperimentTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteExperimentTemplateRequest)

};

} // namespace FIS
} // namespace QtAws

#endif
