// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROBOTAPPLICATIONSRESPONSE_H
#define QTAWS_LISTROBOTAPPLICATIONSRESPONSE_H

#include "robomakerresponse.h"
#include "listrobotapplicationsrequest.h"

namespace QtAws {
namespace RoboMaker {

class ListRobotApplicationsResponsePrivate;

class QTAWSROBOMAKER_EXPORT ListRobotApplicationsResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    ListRobotApplicationsResponse(const ListRobotApplicationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRobotApplicationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRobotApplicationsResponse)
    Q_DISABLE_COPY(ListRobotApplicationsResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
