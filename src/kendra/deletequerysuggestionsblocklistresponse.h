// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEQUERYSUGGESTIONSBLOCKLISTRESPONSE_H
#define QTAWS_DELETEQUERYSUGGESTIONSBLOCKLISTRESPONSE_H

#include "kendraresponse.h"
#include "deletequerysuggestionsblocklistrequest.h"

namespace QtAws {
namespace Kendra {

class DeleteQuerySuggestionsBlockListResponsePrivate;

class QTAWSKENDRA_EXPORT DeleteQuerySuggestionsBlockListResponse : public KendraResponse {
    Q_OBJECT

public:
    DeleteQuerySuggestionsBlockListResponse(const DeleteQuerySuggestionsBlockListRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteQuerySuggestionsBlockListRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteQuerySuggestionsBlockListResponse)
    Q_DISABLE_COPY(DeleteQuerySuggestionsBlockListResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
