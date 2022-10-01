// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEQUERYSUGGESTIONSBLOCKLISTRESPONSE_H
#define QTAWS_UPDATEQUERYSUGGESTIONSBLOCKLISTRESPONSE_H

#include "kendraresponse.h"
#include "updatequerysuggestionsblocklistrequest.h"

namespace QtAws {
namespace Kendra {

class UpdateQuerySuggestionsBlockListResponsePrivate;

class QTAWSKENDRA_EXPORT UpdateQuerySuggestionsBlockListResponse : public KendraResponse {
    Q_OBJECT

public:
    UpdateQuerySuggestionsBlockListResponse(const UpdateQuerySuggestionsBlockListRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateQuerySuggestionsBlockListRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateQuerySuggestionsBlockListResponse)
    Q_DISABLE_COPY(UpdateQuerySuggestionsBlockListResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
