// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHSESSIONSRESPONSE_H
#define QTAWS_SEARCHSESSIONSRESPONSE_H

#include "wisdomresponse.h"
#include "searchsessionsrequest.h"

namespace QtAws {
namespace Wisdom {

class SearchSessionsResponsePrivate;

class QTAWSWISDOM_EXPORT SearchSessionsResponse : public WisdomResponse {
    Q_OBJECT

public:
    SearchSessionsResponse(const SearchSessionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchSessionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchSessionsResponse)
    Q_DISABLE_COPY(SearchSessionsResponse)

};

} // namespace Wisdom
} // namespace QtAws

#endif
