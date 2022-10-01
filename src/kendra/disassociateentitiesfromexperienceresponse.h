// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEENTITIESFROMEXPERIENCERESPONSE_H
#define QTAWS_DISASSOCIATEENTITIESFROMEXPERIENCERESPONSE_H

#include "kendraresponse.h"
#include "disassociateentitiesfromexperiencerequest.h"

namespace QtAws {
namespace Kendra {

class DisassociateEntitiesFromExperienceResponsePrivate;

class QTAWSKENDRA_EXPORT DisassociateEntitiesFromExperienceResponse : public KendraResponse {
    Q_OBJECT

public:
    DisassociateEntitiesFromExperienceResponse(const DisassociateEntitiesFromExperienceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateEntitiesFromExperienceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateEntitiesFromExperienceResponse)
    Q_DISABLE_COPY(DisassociateEntitiesFromExperienceResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
