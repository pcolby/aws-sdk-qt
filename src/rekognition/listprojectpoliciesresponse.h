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

#ifndef QTAWS_LISTPROJECTPOLICIESRESPONSE_H
#define QTAWS_LISTPROJECTPOLICIESRESPONSE_H

#include "rekognitionresponse.h"
#include "listprojectpoliciesrequest.h"

namespace QtAws {
namespace Rekognition {

class ListProjectPoliciesResponsePrivate;

class QTAWSREKOGNITION_EXPORT ListProjectPoliciesResponse : public RekognitionResponse {
    Q_OBJECT

public:
    ListProjectPoliciesResponse(const ListProjectPoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListProjectPoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProjectPoliciesResponse)
    Q_DISABLE_COPY(ListProjectPoliciesResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif
