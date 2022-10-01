// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECIPEVERSIONSRESPONSE_H
#define QTAWS_LISTRECIPEVERSIONSRESPONSE_H

#include "databrewresponse.h"
#include "listrecipeversionsrequest.h"

namespace QtAws {
namespace DataBrew {

class ListRecipeVersionsResponsePrivate;

class QTAWSDATABREW_EXPORT ListRecipeVersionsResponse : public DataBrewResponse {
    Q_OBJECT

public:
    ListRecipeVersionsResponse(const ListRecipeVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRecipeVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRecipeVersionsResponse)
    Q_DISABLE_COPY(ListRecipeVersionsResponse)

};

} // namespace DataBrew
} // namespace QtAws

#endif
