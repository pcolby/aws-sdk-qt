// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMAGEPACKAGESRESPONSE_H
#define QTAWS_LISTIMAGEPACKAGESRESPONSE_H

#include "imagebuilderresponse.h"
#include "listimagepackagesrequest.h"

namespace QtAws {
namespace ImageBuilder {

class ListImagePackagesResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT ListImagePackagesResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    ListImagePackagesResponse(const ListImagePackagesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListImagePackagesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListImagePackagesResponse)
    Q_DISABLE_COPY(ListImagePackagesResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
