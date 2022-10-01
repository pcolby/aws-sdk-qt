// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXPERIENCEENTITIESRESPONSE_H
#define QTAWS_LISTEXPERIENCEENTITIESRESPONSE_H

#include "kendraresponse.h"
#include "listexperienceentitiesrequest.h"

namespace QtAws {
namespace Kendra {

class ListExperienceEntitiesResponsePrivate;

class QTAWSKENDRA_EXPORT ListExperienceEntitiesResponse : public KendraResponse {
    Q_OBJECT

public:
    ListExperienceEntitiesResponse(const ListExperienceEntitiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListExperienceEntitiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListExperienceEntitiesResponse)
    Q_DISABLE_COPY(ListExperienceEntitiesResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
