// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSKILLSRESPONSE_H
#define QTAWS_LISTSKILLSRESPONSE_H

#include "alexaforbusinessresponse.h"
#include "listskillsrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class ListSkillsResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT ListSkillsResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    ListSkillsResponse(const ListSkillsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSkillsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSkillsResponse)
    Q_DISABLE_COPY(ListSkillsResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
