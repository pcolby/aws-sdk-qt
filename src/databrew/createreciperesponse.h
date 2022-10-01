// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECIPERESPONSE_H
#define QTAWS_CREATERECIPERESPONSE_H

#include "databrewresponse.h"
#include "createreciperequest.h"

namespace QtAws {
namespace DataBrew {

class CreateRecipeResponsePrivate;

class QTAWSDATABREW_EXPORT CreateRecipeResponse : public DataBrewResponse {
    Q_OBJECT

public:
    CreateRecipeResponse(const CreateRecipeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRecipeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRecipeResponse)
    Q_DISABLE_COPY(CreateRecipeResponse)

};

} // namespace DataBrew
} // namespace QtAws

#endif
