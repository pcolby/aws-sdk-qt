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

#ifndef QTAWS_STARTSESSIONRESPONSE_H
#define QTAWS_STARTSESSIONRESPONSE_H

#include "ssmresponse.h"
#include "startsessionrequest.h"

namespace QtAws {
namespace Ssm {

class StartSessionResponsePrivate;

class QTAWSSSM_EXPORT StartSessionResponse : public SsmResponse {
    Q_OBJECT

public:
    StartSessionResponse(const StartSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartSessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartSessionResponse)
    Q_DISABLE_COPY(StartSessionResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
