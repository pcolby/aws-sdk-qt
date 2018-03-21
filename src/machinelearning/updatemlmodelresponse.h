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

#ifndef QTAWS_UPDATEMLMODELRESPONSE_H
#define QTAWS_UPDATEMLMODELRESPONSE_H

#include "machinelearningresponse.h"
#include "updatemlmodelrequest.h"

namespace AWS {

namespace machinelearning {

class UpdateMLModelResponsePrivate;

class QTAWS_EXPORT UpdateMLModelResponse : public UpdateMLModelResponse {
    Q_OBJECT

public:
    UpdateMLModelResponse(const UpdateMLModelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateMLModelRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(UpdateMLModelResponse)
    Q_DISABLE_COPY(UpdateMLModelResponse)

};

} // namespace machinelearning
} // namespace AWS

#endif
