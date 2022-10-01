// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTAINERRECIPERESPONSE_H
#define QTAWS_DELETECONTAINERRECIPERESPONSE_H

#include "imagebuilderresponse.h"
#include "deletecontainerreciperequest.h"

namespace QtAws {
namespace ImageBuilder {

class DeleteContainerRecipeResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT DeleteContainerRecipeResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    DeleteContainerRecipeResponse(const DeleteContainerRecipeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteContainerRecipeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteContainerRecipeResponse)
    Q_DISABLE_COPY(DeleteContainerRecipeResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
