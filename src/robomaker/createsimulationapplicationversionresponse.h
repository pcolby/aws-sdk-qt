// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESIMULATIONAPPLICATIONVERSIONRESPONSE_H
#define QTAWS_CREATESIMULATIONAPPLICATIONVERSIONRESPONSE_H

#include "robomakerresponse.h"
#include "createsimulationapplicationversionrequest.h"

namespace QtAws {
namespace RoboMaker {

class CreateSimulationApplicationVersionResponsePrivate;

class QTAWSROBOMAKER_EXPORT CreateSimulationApplicationVersionResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    CreateSimulationApplicationVersionResponse(const CreateSimulationApplicationVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSimulationApplicationVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSimulationApplicationVersionResponse)
    Q_DISABLE_COPY(CreateSimulationApplicationVersionResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
