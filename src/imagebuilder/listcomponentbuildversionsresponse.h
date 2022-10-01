// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPONENTBUILDVERSIONSRESPONSE_H
#define QTAWS_LISTCOMPONENTBUILDVERSIONSRESPONSE_H

#include "imagebuilderresponse.h"
#include "listcomponentbuildversionsrequest.h"

namespace QtAws {
namespace ImageBuilder {

class ListComponentBuildVersionsResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT ListComponentBuildVersionsResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    ListComponentBuildVersionsResponse(const ListComponentBuildVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListComponentBuildVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListComponentBuildVersionsResponse)
    Q_DISABLE_COPY(ListComponentBuildVersionsResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
