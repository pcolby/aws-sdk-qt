// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERECIPEJOBRESPONSE_H
#define QTAWS_UPDATERECIPEJOBRESPONSE_H

#include "databrewresponse.h"
#include "updaterecipejobrequest.h"

namespace QtAws {
namespace DataBrew {

class UpdateRecipeJobResponsePrivate;

class QTAWSDATABREW_EXPORT UpdateRecipeJobResponse : public DataBrewResponse {
    Q_OBJECT

public:
    UpdateRecipeJobResponse(const UpdateRecipeJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRecipeJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRecipeJobResponse)
    Q_DISABLE_COPY(UpdateRecipeJobResponse)

};

} // namespace DataBrew
} // namespace QtAws

#endif
