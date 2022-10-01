// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMAGEBUILDVERSIONSRESPONSE_H
#define QTAWS_LISTIMAGEBUILDVERSIONSRESPONSE_H

#include "imagebuilderresponse.h"
#include "listimagebuildversionsrequest.h"

namespace QtAws {
namespace ImageBuilder {

class ListImageBuildVersionsResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT ListImageBuildVersionsResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    ListImageBuildVersionsResponse(const ListImageBuildVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListImageBuildVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListImageBuildVersionsResponse)
    Q_DISABLE_COPY(ListImageBuildVersionsResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
