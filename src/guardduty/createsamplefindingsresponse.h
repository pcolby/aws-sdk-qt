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

#ifndef QTAWS_CREATESAMPLEFINDINGSRESPONSE_H
#define QTAWS_CREATESAMPLEFINDINGSRESPONSE_H

#include "guarddutyresponse.h"
#include "createsamplefindingsrequest.h"

namespace QtAws {
namespace GuardDuty {

class CreateSampleFindingsResponsePrivate;

class QTAWS_EXPORT CreateSampleFindingsResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    CreateSampleFindingsResponse(const CreateSampleFindingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSampleFindingsRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(CreateSampleFindingsResponse)
    Q_DISABLE_COPY(CreateSampleFindingsResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
