// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLEARQUERYSUGGESTIONSRESPONSE_H
#define QTAWS_CLEARQUERYSUGGESTIONSRESPONSE_H

#include "kendraresponse.h"
#include "clearquerysuggestionsrequest.h"

namespace QtAws {
namespace Kendra {

class ClearQuerySuggestionsResponsePrivate;

class QTAWSKENDRA_EXPORT ClearQuerySuggestionsResponse : public KendraResponse {
    Q_OBJECT

public:
    ClearQuerySuggestionsResponse(const ClearQuerySuggestionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ClearQuerySuggestionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ClearQuerySuggestionsResponse)
    Q_DISABLE_COPY(ClearQuerySuggestionsResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
