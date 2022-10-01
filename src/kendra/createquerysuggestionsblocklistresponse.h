// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEQUERYSUGGESTIONSBLOCKLISTRESPONSE_H
#define QTAWS_CREATEQUERYSUGGESTIONSBLOCKLISTRESPONSE_H

#include "kendraresponse.h"
#include "createquerysuggestionsblocklistrequest.h"

namespace QtAws {
namespace Kendra {

class CreateQuerySuggestionsBlockListResponsePrivate;

class QTAWSKENDRA_EXPORT CreateQuerySuggestionsBlockListResponse : public KendraResponse {
    Q_OBJECT

public:
    CreateQuerySuggestionsBlockListResponse(const CreateQuerySuggestionsBlockListRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateQuerySuggestionsBlockListRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateQuerySuggestionsBlockListResponse)
    Q_DISABLE_COPY(CreateQuerySuggestionsBlockListResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
