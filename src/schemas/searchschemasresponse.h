// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHSCHEMASRESPONSE_H
#define QTAWS_SEARCHSCHEMASRESPONSE_H

#include "schemasresponse.h"
#include "searchschemasrequest.h"

namespace QtAws {
namespace Schemas {

class SearchSchemasResponsePrivate;

class QTAWSSCHEMAS_EXPORT SearchSchemasResponse : public SchemasResponse {
    Q_OBJECT

public:
    SearchSchemasResponse(const SearchSchemasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchSchemasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchSchemasResponse)
    Q_DISABLE_COPY(SearchSchemasResponse)

};

} // namespace Schemas
} // namespace QtAws

#endif
