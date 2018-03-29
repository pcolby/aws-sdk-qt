/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_UPDATEEVALUATIONRESPONSE_H
#define QTAWS_UPDATEEVALUATIONRESPONSE_H

#include "machinelearningresponse.h"
#include "updateevaluationrequest.h"

namespace AWS {

namespace MachineLearning {

class UpdateEvaluationResponsePrivate;

class QTAWS_EXPORT UpdateEvaluationResponse : public MachineLearningResponse {
    Q_OBJECT

public:
    UpdateEvaluationResponse(const UpdateEvaluationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateEvaluationRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(UpdateEvaluationResponse)
    Q_DISABLE_COPY(UpdateEvaluationResponse)

};

} // namespace MachineLearning
} // namespace AWS

#endif
