// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEENTITIESTOEXPERIENCERESPONSE_H
#define QTAWS_ASSOCIATEENTITIESTOEXPERIENCERESPONSE_H

#include "kendraresponse.h"
#include "associateentitiestoexperiencerequest.h"

namespace QtAws {
namespace Kendra {

class AssociateEntitiesToExperienceResponsePrivate;

class QTAWSKENDRA_EXPORT AssociateEntitiesToExperienceResponse : public KendraResponse {
    Q_OBJECT

public:
    AssociateEntitiesToExperienceResponse(const AssociateEntitiesToExperienceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateEntitiesToExperienceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateEntitiesToExperienceResponse)
    Q_DISABLE_COPY(AssociateEntitiesToExperienceResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
