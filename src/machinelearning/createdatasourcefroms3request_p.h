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

#ifndef QTAWS_CREATEDATASOURCEFROMS3REQUEST_P_H
#define QTAWS_CREATEDATASOURCEFROMS3REQUEST_P_H

#include "machinelearning_p.h"
#include "createdatasourcefroms3request.h"

namespace AWS {

namespace MachineLearning {

class CreateDataSourceFromS3Request;

class QTAWS_EXPORT CreateDataSourceFromS3RequestPrivate : public MachineLearningPrivate {

public:
    CreateDataSourceFromS3RequestPrivate(const MachineLearning::Action action,
                                   CreateDataSourceFromS3Request * const q);
    CreateDataSourceFromS3RequestPrivate(const CreateDataSourceFromS3RequestPrivate &other,
                                   CreateDataSourceFromS3Request * const q);

private:
    Q_DECLARE_PUBLIC(CreateDataSourceFromS3Request)

};

} // namespace MachineLearning
} // namespace AWS

#endif
