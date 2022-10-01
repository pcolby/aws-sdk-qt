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

#ifndef QTAWS_UPDATEEVENTSOURCESCONFIGRESPONSE_H
#define QTAWS_UPDATEEVENTSOURCESCONFIGRESPONSE_H

#include "devopsgururesponse.h"
#include "updateeventsourcesconfigrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class UpdateEventSourcesConfigResponsePrivate;

class QTAWSDEVOPSGURU_EXPORT UpdateEventSourcesConfigResponse : public DevOpsGuruResponse {
    Q_OBJECT

public:
    UpdateEventSourcesConfigResponse(const UpdateEventSourcesConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateEventSourcesConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEventSourcesConfigResponse)
    Q_DISABLE_COPY(UpdateEventSourcesConfigResponse)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
