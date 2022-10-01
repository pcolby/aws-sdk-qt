// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHSKILLGROUPSRESPONSE_H
#define QTAWS_SEARCHSKILLGROUPSRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "searchskillgroupsrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class SearchSkillGroupsResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT SearchSkillGroupsResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    SearchSkillGroupsResponse(const SearchSkillGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchSkillGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchSkillGroupsResponse)
    Q_DISABLE_COPY(SearchSkillGroupsResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
