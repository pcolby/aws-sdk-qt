// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEPERSONASFROMENTITIESRESPONSE_H
#define QTAWS_DISASSOCIATEPERSONASFROMENTITIESRESPONSE_H

#include "kendraresponse.h"
#include "disassociatepersonasfromentitiesrequest.h"

namespace QtAws {
namespace Kendra {

class DisassociatePersonasFromEntitiesResponsePrivate;

class QTAWSKENDRA_EXPORT DisassociatePersonasFromEntitiesResponse : public KendraResponse {
    Q_OBJECT

public:
    DisassociatePersonasFromEntitiesResponse(const DisassociatePersonasFromEntitiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociatePersonasFromEntitiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociatePersonasFromEntitiesResponse)
    Q_DISABLE_COPY(DisassociatePersonasFromEntitiesResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
