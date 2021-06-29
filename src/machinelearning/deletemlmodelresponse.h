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

#ifndef QTAWS_DELETEMLMODELRESPONSE_H
#define QTAWS_DELETEMLMODELRESPONSE_H

#include "machinelearningresponse.h"
#include "deletemlmodelrequest.h"

namespace QtAws {
namespace MachineLearning {

class DeleteMLModelResponsePrivate;

class QTAWSMACHINELEARNING_EXPORT DeleteMLModelResponse : public MachineLearningResponse {
    Q_OBJECT

public:
    DeleteMLModelResponse(const DeleteMLModelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteMLModelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMLModelResponse)
    Q_DISABLE_COPY(DeleteMLModelResponse)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
