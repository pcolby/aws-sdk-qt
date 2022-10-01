// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESPONSEPLANRESPONSE_H
#define QTAWS_CREATERESPONSEPLANRESPONSE_H

#include "ssmincidentsresponse.h"
#include "createresponseplanrequest.h"

namespace QtAws {
namespace SsmIncidents {

class CreateResponsePlanResponsePrivate;

class QTAWSSSMINCIDENTS_EXPORT CreateResponsePlanResponse : public SsmIncidentsResponse {
    Q_OBJECT

public:
    CreateResponsePlanResponse(const CreateResponsePlanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateResponsePlanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateResponsePlanResponse)
    Q_DISABLE_COPY(CreateResponsePlanResponse)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
