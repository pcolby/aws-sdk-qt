// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMAGERECIPERESPONSE_H
#define QTAWS_GETIMAGERECIPERESPONSE_H

#include "imagebuilderresponse.h"
#include "getimagereciperequest.h"

namespace QtAws {
namespace ImageBuilder {

class GetImageRecipeResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT GetImageRecipeResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    GetImageRecipeResponse(const GetImageRecipeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetImageRecipeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetImageRecipeResponse)
    Q_DISABLE_COPY(GetImageRecipeResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
