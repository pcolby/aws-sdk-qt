// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIMULATIONAPPLICATIONSRESPONSE_H
#define QTAWS_LISTSIMULATIONAPPLICATIONSRESPONSE_H

#include "robomakerresponse.h"
#include "listsimulationapplicationsrequest.h"

namespace QtAws {
namespace RoboMaker {

class ListSimulationApplicationsResponsePrivate;

class QTAWSROBOMAKER_EXPORT ListSimulationApplicationsResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    ListSimulationApplicationsResponse(const ListSimulationApplicationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSimulationApplicationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSimulationApplicationsResponse)
    Q_DISABLE_COPY(ListSimulationApplicationsResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
