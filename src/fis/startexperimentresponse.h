// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTEXPERIMENTRESPONSE_H
#define QTAWS_STARTEXPERIMENTRESPONSE_H

#include "fisresponse.h"
#include "startexperimentrequest.h"

namespace QtAws {
namespace Fis {

class StartExperimentResponsePrivate;

class QTAWSFIS_EXPORT StartExperimentResponse : public FisResponse {
    Q_OBJECT

public:
    StartExperimentResponse(const StartExperimentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartExperimentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartExperimentResponse)
    Q_DISABLE_COPY(StartExperimentResponse)

};

} // namespace Fis
} // namespace QtAws

#endif
