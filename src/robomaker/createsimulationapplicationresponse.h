// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESIMULATIONAPPLICATIONRESPONSE_H
#define QTAWS_CREATESIMULATIONAPPLICATIONRESPONSE_H

#include "robomakerresponse.h"
#include "createsimulationapplicationrequest.h"

namespace QtAws {
namespace RoboMaker {

class CreateSimulationApplicationResponsePrivate;

class QTAWSROBOMAKER_EXPORT CreateSimulationApplicationResponse : public RoboMakerResponse {
    Q_OBJECT

public:
    CreateSimulationApplicationResponse(const CreateSimulationApplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSimulationApplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSimulationApplicationResponse)
    Q_DISABLE_COPY(CreateSimulationApplicationResponse)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
