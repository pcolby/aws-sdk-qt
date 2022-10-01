// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECIPEVERSIONRESPONSE_H
#define QTAWS_DELETERECIPEVERSIONRESPONSE_H

#include "databrewresponse.h"
#include "deleterecipeversionrequest.h"

namespace QtAws {
namespace DataBrew {

class DeleteRecipeVersionResponsePrivate;

class QTAWSDATABREW_EXPORT DeleteRecipeVersionResponse : public DataBrewResponse {
    Q_OBJECT

public:
    DeleteRecipeVersionResponse(const DeleteRecipeVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRecipeVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRecipeVersionResponse)
    Q_DISABLE_COPY(DeleteRecipeVersionResponse)

};

} // namespace DataBrew
} // namespace QtAws

#endif
