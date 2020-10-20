/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_CREATEDATASETGROUPRESPONSE_H
#define QTAWS_CREATEDATASETGROUPRESPONSE_H

#include "personalizeresponse.h"
#include "createdatasetgrouprequest.h"

namespace QtAws {
namespace Personalize {

class CreateDatasetGroupResponsePrivate;

class QTAWS_EXPORT CreateDatasetGroupResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    CreateDatasetGroupResponse(const CreateDatasetGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDatasetGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDatasetGroupResponse)
    Q_DISABLE_COPY(CreateDatasetGroupResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
