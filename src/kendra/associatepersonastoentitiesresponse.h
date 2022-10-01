// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPERSONASTOENTITIESRESPONSE_H
#define QTAWS_ASSOCIATEPERSONASTOENTITIESRESPONSE_H

#include "kendraresponse.h"
#include "associatepersonastoentitiesrequest.h"

namespace QtAws {
namespace Kendra {

class AssociatePersonasToEntitiesResponsePrivate;

class QTAWSKENDRA_EXPORT AssociatePersonasToEntitiesResponse : public KendraResponse {
    Q_OBJECT

public:
    AssociatePersonasToEntitiesResponse(const AssociatePersonasToEntitiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociatePersonasToEntitiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociatePersonasToEntitiesResponse)
    Q_DISABLE_COPY(AssociatePersonasToEntitiesResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
