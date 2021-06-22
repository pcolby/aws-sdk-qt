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

#ifndef QTAWS_CREATETRIALCOMPONENTREQUEST_P_H
#define QTAWS_CREATETRIALCOMPONENTREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "createtrialcomponentrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateTrialComponentRequest;

class CreateTrialComponentRequestPrivate : public SageMakerRequestPrivate {

public:
    CreateTrialComponentRequestPrivate(const SageMakerRequest::Action action,
                                   CreateTrialComponentRequest * const q);
    CreateTrialComponentRequestPrivate(const CreateTrialComponentRequestPrivate &other,
                                   CreateTrialComponentRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTrialComponentRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
