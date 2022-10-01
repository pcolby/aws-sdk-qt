// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIMAGERECIPERESPONSE_H
#define QTAWS_CREATEIMAGERECIPERESPONSE_H

#include "imagebuilderresponse.h"
#include "createimagereciperequest.h"

namespace QtAws {
namespace ImageBuilder {

class CreateImageRecipeResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT CreateImageRecipeResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    CreateImageRecipeResponse(const CreateImageRecipeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateImageRecipeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateImageRecipeResponse)
    Q_DISABLE_COPY(CreateImageRecipeResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
