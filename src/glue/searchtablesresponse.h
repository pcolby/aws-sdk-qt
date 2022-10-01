// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHTABLESRESPONSE_H
#define QTAWS_SEARCHTABLESRESPONSE_H

#include "glueresponse.h"
#include "searchtablesrequest.h"

namespace QtAws {
namespace Glue {

class SearchTablesResponsePrivate;

class QTAWSGLUE_EXPORT SearchTablesResponse : public GlueResponse {
    Q_OBJECT

public:
    SearchTablesResponse(const SearchTablesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchTablesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchTablesResponse)
    Q_DISABLE_COPY(SearchTablesResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
