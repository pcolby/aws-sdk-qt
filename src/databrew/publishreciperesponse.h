// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHRECIPERESPONSE_H
#define QTAWS_PUBLISHRECIPERESPONSE_H

#include "databrewresponse.h"
#include "publishreciperequest.h"

namespace QtAws {
namespace DataBrew {

class PublishRecipeResponsePrivate;

class QTAWSDATABREW_EXPORT PublishRecipeResponse : public DataBrewResponse {
    Q_OBJECT

public:
    PublishRecipeResponse(const PublishRecipeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PublishRecipeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PublishRecipeResponse)
    Q_DISABLE_COPY(PublishRecipeResponse)

};

} // namespace DataBrew
} // namespace QtAws

#endif
