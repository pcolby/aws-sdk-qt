// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESPONSEPLANRESPONSE_H
#define QTAWS_GETRESPONSEPLANRESPONSE_H

#include "ssmincidentsresponse.h"
#include "getresponseplanrequest.h"

namespace QtAws {
namespace SsmIncidents {

class GetResponsePlanResponsePrivate;

class QTAWSSSMINCIDENTS_EXPORT GetResponsePlanResponse : public SsmIncidentsResponse {
    Q_OBJECT

public:
    GetResponsePlanResponse(const GetResponsePlanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetResponsePlanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResponsePlanResponse)
    Q_DISABLE_COPY(GetResponsePlanResponse)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
