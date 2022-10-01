// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERECIPERESPONSE_H
#define QTAWS_UPDATERECIPERESPONSE_H

#include "databrewresponse.h"
#include "updatereciperequest.h"

namespace QtAws {
namespace DataBrew {

class UpdateRecipeResponsePrivate;

class QTAWSDATABREW_EXPORT UpdateRecipeResponse : public DataBrewResponse {
    Q_OBJECT

public:
    UpdateRecipeResponse(const UpdateRecipeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRecipeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRecipeResponse)
    Q_DISABLE_COPY(UpdateRecipeResponse)

};

} // namespace DataBrew
} // namespace QtAws

#endif
