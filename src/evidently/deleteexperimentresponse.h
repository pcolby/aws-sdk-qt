// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXPERIMENTRESPONSE_H
#define QTAWS_DELETEEXPERIMENTRESPONSE_H

#include "evidentlyresponse.h"
#include "deleteexperimentrequest.h"

namespace QtAws {
namespace Evidently {

class DeleteExperimentResponsePrivate;

class QTAWSEVIDENTLY_EXPORT DeleteExperimentResponse : public EvidentlyResponse {
    Q_OBJECT

public:
    DeleteExperimentResponse(const DeleteExperimentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteExperimentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteExperimentResponse)
    Q_DISABLE_COPY(DeleteExperimentResponse)

};

} // namespace Evidently
} // namespace QtAws

#endif
