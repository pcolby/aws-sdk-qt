// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXPERIMENTRESPONSE_H
#define QTAWS_CREATEEXPERIMENTRESPONSE_H

#include "evidentlyresponse.h"
#include "createexperimentrequest.h"

namespace QtAws {
namespace Evidently {

class CreateExperimentResponsePrivate;

class QTAWSEVIDENTLY_EXPORT CreateExperimentResponse : public EvidentlyResponse {
    Q_OBJECT

public:
    CreateExperimentResponse(const CreateExperimentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateExperimentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateExperimentResponse)
    Q_DISABLE_COPY(CreateExperimentResponse)

};

} // namespace Evidently
} // namespace QtAws

#endif
