// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERRECIPERESPONSE_H
#define QTAWS_GETCONTAINERRECIPERESPONSE_H

#include "imagebuilderresponse.h"
#include "getcontainerreciperequest.h"

namespace QtAws {
namespace ImageBuilder {

class GetContainerRecipeResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT GetContainerRecipeResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    GetContainerRecipeResponse(const GetContainerRecipeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetContainerRecipeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContainerRecipeResponse)
    Q_DISABLE_COPY(GetContainerRecipeResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
