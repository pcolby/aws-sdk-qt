// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPACKAGINGCONFIGURATIONRESPONSE_H
#define QTAWS_DELETEPACKAGINGCONFIGURATIONRESPONSE_H

#include "mediapackagevodresponse.h"
#include "deletepackagingconfigurationrequest.h"

namespace QtAws {
namespace MediaPackageVod {

class DeletePackagingConfigurationResponsePrivate;

class QTAWSMEDIAPACKAGEVOD_EXPORT DeletePackagingConfigurationResponse : public MediaPackageVodResponse {
    Q_OBJECT

public:
    DeletePackagingConfigurationResponse(const DeletePackagingConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePackagingConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePackagingConfigurationResponse)
    Q_DISABLE_COPY(DeletePackagingConfigurationResponse)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
