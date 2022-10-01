// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUERYSUGGESTIONSCONFIGRESPONSE_H
#define QTAWS_UPDATEQUERYSUGGESTIONSCONFIGRESPONSE_H

#include "kendraresponse.h"
#include "updatequerysuggestionsconfigrequest.h"

namespace QtAws {
namespace Kendra {

class UpdateQuerySuggestionsConfigResponsePrivate;

class QTAWSKENDRA_EXPORT UpdateQuerySuggestionsConfigResponse : public KendraResponse {
    Q_OBJECT

public:
    UpdateQuerySuggestionsConfigResponse(const UpdateQuerySuggestionsConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateQuerySuggestionsConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateQuerySuggestionsConfigResponse)
    Q_DISABLE_COPY(UpdateQuerySuggestionsConfigResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
