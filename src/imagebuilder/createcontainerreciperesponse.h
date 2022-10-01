// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTAINERRECIPERESPONSE_H
#define QTAWS_CREATECONTAINERRECIPERESPONSE_H

#include "imagebuilderresponse.h"
#include "createcontainerreciperequest.h"

namespace QtAws {
namespace ImageBuilder {

class CreateContainerRecipeResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT CreateContainerRecipeResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    CreateContainerRecipeResponse(const CreateContainerRecipeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateContainerRecipeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateContainerRecipeResponse)
    Q_DISABLE_COPY(CreateContainerRecipeResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
