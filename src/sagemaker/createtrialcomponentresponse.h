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

#ifndef QTAWS_CREATETRIALCOMPONENTRESPONSE_H
#define QTAWS_CREATETRIALCOMPONENTRESPONSE_H

#include "sagemakerresponse.h"
#include "createtrialcomponentrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateTrialComponentResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreateTrialComponentResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreateTrialComponentResponse(const CreateTrialComponentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTrialComponentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTrialComponentResponse)
    Q_DISABLE_COPY(CreateTrialComponentResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
