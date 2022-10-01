// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESPONSEPLANRESPONSE_H
#define QTAWS_UPDATERESPONSEPLANRESPONSE_H

#include "ssmincidentsresponse.h"
#include "updateresponseplanrequest.h"

namespace QtAws {
namespace SsmIncidents {

class UpdateResponsePlanResponsePrivate;

class QTAWSSSMINCIDENTS_EXPORT UpdateResponsePlanResponse : public SsmIncidentsResponse {
    Q_OBJECT

public:
    UpdateResponsePlanResponse(const UpdateResponsePlanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateResponsePlanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateResponsePlanResponse)
    Q_DISABLE_COPY(UpdateResponsePlanResponse)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
