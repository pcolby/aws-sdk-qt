// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUERYSUGGESTIONSRESPONSE_H
#define QTAWS_GETQUERYSUGGESTIONSRESPONSE_H

#include "kendraresponse.h"
#include "getquerysuggestionsrequest.h"

namespace QtAws {
namespace Kendra {

class GetQuerySuggestionsResponsePrivate;

class QTAWSKENDRA_EXPORT GetQuerySuggestionsResponse : public KendraResponse {
    Q_OBJECT

public:
    GetQuerySuggestionsResponse(const GetQuerySuggestionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetQuerySuggestionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetQuerySuggestionsResponse)
    Q_DISABLE_COPY(GetQuerySuggestionsResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
