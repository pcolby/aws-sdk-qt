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

#ifndef QTAWS_GETMETRICPOLICYRESPONSE_H
#define QTAWS_GETMETRICPOLICYRESPONSE_H

#include "mediastoreresponse.h"
#include "getmetricpolicyrequest.h"

namespace QtAws {
namespace MediaStore {

class GetMetricPolicyResponsePrivate;

class QTAWSMEDIASTORE_EXPORT GetMetricPolicyResponse : public MediaStoreResponse {
    Q_OBJECT

public:
    GetMetricPolicyResponse(const GetMetricPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMetricPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMetricPolicyResponse)
    Q_DISABLE_COPY(GetMetricPolicyResponse)

};

} // namespace MediaStore
} // namespace QtAws

#endif
