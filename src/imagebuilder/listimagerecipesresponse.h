// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMAGERECIPESRESPONSE_H
#define QTAWS_LISTIMAGERECIPESRESPONSE_H

#include "imagebuilderresponse.h"
#include "listimagerecipesrequest.h"

namespace QtAws {
namespace ImageBuilder {

class ListImageRecipesResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT ListImageRecipesResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    ListImageRecipesResponse(const ListImageRecipesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListImageRecipesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListImageRecipesResponse)
    Q_DISABLE_COPY(ListImageRecipesResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
