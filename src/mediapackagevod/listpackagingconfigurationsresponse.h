// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPACKAGINGCONFIGURATIONSRESPONSE_H
#define QTAWS_LISTPACKAGINGCONFIGURATIONSRESPONSE_H

#include "mediapackagevodresponse.h"
#include "listpackagingconfigurationsrequest.h"

namespace QtAws {
namespace MediaPackageVod {

class ListPackagingConfigurationsResponsePrivate;

class QTAWSMEDIAPACKAGEVOD_EXPORT ListPackagingConfigurationsResponse : public MediaPackageVodResponse {
    Q_OBJECT

public:
    ListPackagingConfigurationsResponse(const ListPackagingConfigurationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPackagingConfigurationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPackagingConfigurationsResponse)
    Q_DISABLE_COPY(ListPackagingConfigurationsResponse)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
