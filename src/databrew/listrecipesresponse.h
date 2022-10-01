// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECIPESRESPONSE_H
#define QTAWS_LISTRECIPESRESPONSE_H

#include "databrewresponse.h"
#include "listrecipesrequest.h"

namespace QtAws {
namespace DataBrew {

class ListRecipesResponsePrivate;

class QTAWSDATABREW_EXPORT ListRecipesResponse : public DataBrewResponse {
    Q_OBJECT

public:
    ListRecipesResponse(const ListRecipesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRecipesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRecipesResponse)
    Q_DISABLE_COPY(ListRecipesResponse)

};

} // namespace DataBrew
} // namespace QtAws

#endif
