// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECIPEJOBRESPONSE_H
#define QTAWS_CREATERECIPEJOBRESPONSE_H

#include "databrewresponse.h"
#include "createrecipejobrequest.h"

namespace QtAws {
namespace DataBrew {

class CreateRecipeJobResponsePrivate;

class QTAWSDATABREW_EXPORT CreateRecipeJobResponse : public DataBrewResponse {
    Q_OBJECT

public:
    CreateRecipeJobResponse(const CreateRecipeJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRecipeJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRecipeJobResponse)
    Q_DISABLE_COPY(CreateRecipeJobResponse)

};

} // namespace DataBrew
} // namespace QtAws

#endif
