// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTAINERRECIPESRESPONSE_H
#define QTAWS_LISTCONTAINERRECIPESRESPONSE_H

#include "imagebuilderresponse.h"
#include "listcontainerrecipesrequest.h"

namespace QtAws {
namespace ImageBuilder {

class ListContainerRecipesResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT ListContainerRecipesResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    ListContainerRecipesResponse(const ListContainerRecipesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListContainerRecipesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListContainerRecipesResponse)
    Q_DISABLE_COPY(ListContainerRecipesResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
