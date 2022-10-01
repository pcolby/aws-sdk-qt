// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHCONTENTRESPONSE_H
#define QTAWS_SEARCHCONTENTRESPONSE_H

#include "wisdomresponse.h"
#include "searchcontentrequest.h"

namespace QtAws {
namespace Wisdom {

class SearchContentResponsePrivate;

class QTAWSWISDOM_EXPORT SearchContentResponse : public WisdomResponse {
    Q_OBJECT

public:
    SearchContentResponse(const SearchContentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchContentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchContentResponse)
    Q_DISABLE_COPY(SearchContentResponse)

};

} // namespace Wisdom
} // namespace QtAws

#endif
