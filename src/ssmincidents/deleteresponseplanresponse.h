// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESPONSEPLANRESPONSE_H
#define QTAWS_DELETERESPONSEPLANRESPONSE_H

#include "ssmincidentsresponse.h"
#include "deleteresponseplanrequest.h"

namespace QtAws {
namespace SsmIncidents {

class DeleteResponsePlanResponsePrivate;

class QTAWSSSMINCIDENTS_EXPORT DeleteResponsePlanResponse : public SsmIncidentsResponse {
    Q_OBJECT

public:
    DeleteResponsePlanResponse(const DeleteResponsePlanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteResponsePlanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResponsePlanResponse)
    Q_DISABLE_COPY(DeleteResponsePlanResponse)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
