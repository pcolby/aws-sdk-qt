/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_STOPTRAININGJOBREQUEST_P_H
#define QTAWS_STOPTRAININGJOBREQUEST_P_H

#include "sagemaker_p.h"
#include "stoptrainingjobrequest.h"

namespace AWS {

namespace SageMaker {

class StopTrainingJobRequest;

class QTAWS_EXPORT StopTrainingJobRequestPrivate : public SageMakerPrivate {

public:
    StopTrainingJobRequestPrivate(const SageMaker::Action action,
                                   StopTrainingJobRequest * const q);
    StopTrainingJobRequestPrivate(const StopTrainingJobRequestPrivate &other,
                                   StopTrainingJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopTrainingJobRequest)

};

} // namespace SageMaker
} // namespace AWS

#endif
