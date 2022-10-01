// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSETSRESPONSE_H
#define QTAWS_LISTASSETSRESPONSE_H

#include "mediapackagevodresponse.h"
#include "listassetsrequest.h"

namespace QtAws {
namespace MediaPackageVod {

class ListAssetsResponsePrivate;

class QTAWSMEDIAPACKAGEVOD_EXPORT ListAssetsResponse : public MediaPackageVodResponse {
    Q_OBJECT

public:
    ListAssetsResponse(const ListAssetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAssetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssetsResponse)
    Q_DISABLE_COPY(ListAssetsResponse)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
