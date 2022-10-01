// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPATIBLEIMAGESRESPONSE_H
#define QTAWS_LISTCOMPATIBLEIMAGESRESPONSE_H

#include "snowballresponse.h"
#include "listcompatibleimagesrequest.h"

namespace QtAws {
namespace Snowball {

class ListCompatibleImagesResponsePrivate;

class QTAWSSNOWBALL_EXPORT ListCompatibleImagesResponse : public SnowballResponse {
    Q_OBJECT

public:
    ListCompatibleImagesResponse(const ListCompatibleImagesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCompatibleImagesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCompatibleImagesResponse)
    Q_DISABLE_COPY(ListCompatibleImagesResponse)

};

} // namespace Snowball
} // namespace QtAws

#endif
