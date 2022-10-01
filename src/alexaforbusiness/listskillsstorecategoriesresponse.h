// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSKILLSSTORECATEGORIESRESPONSE_H
#define QTAWS_LISTSKILLSSTORECATEGORIESRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "listskillsstorecategoriesrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class ListSkillsStoreCategoriesResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT ListSkillsStoreCategoriesResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    ListSkillsStoreCategoriesResponse(const ListSkillsStoreCategoriesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSkillsStoreCategoriesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSkillsStoreCategoriesResponse)
    Q_DISABLE_COPY(ListSkillsStoreCategoriesResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
