// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIMULATIONJOBBATCHESRESPONSE_H
#define QTAWS_LISTSIMULATIONJOBBATCHESRESPONSE_H

#include "robomakerresponse.h"
#include "listsimulationjobbatchesrequest.h"

namespace QtAws {
namespace RoboMaker {

class ListSimulationJobBatchesResponsePrivate;

class QTAWSROBOMAKER_EXPORT ListSimulationJobBatchesResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    ListSimulationJobBatchesResponse(const ListSimulationJobBatchesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSimulationJobBatchesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSimulationJobBatchesResponse)
    Q_DISABLE_COPY(ListSimulationJobBatchesResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
