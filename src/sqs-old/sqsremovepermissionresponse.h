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
    along with QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef SQSREMOVEPERMISSION_H
#define SQSREMOVEPERMISSION_H

#include "sqsremovepermissionrequest.h"
#include "sqsresponse.h"

namespace QtAws {
namespace SqsOld {

class SqsRemovePermissionResponsePrivate;

class QTAWS_EXPORT SqsRemovePermissionResponse : public SqsResponse {
    Q_OBJECT

public:
    SqsRemovePermissionResponse(const SqsRemovePermissionRequest &request,
                             QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SqsRemovePermissionRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(SqsRemovePermissionResponse)
    Q_DISABLE_COPY(SqsRemovePermissionResponse)
    friend class TestSqsRemovePermissionResponse;
};

} // namespace SqsOld
} // namespace QtAws

#endif
