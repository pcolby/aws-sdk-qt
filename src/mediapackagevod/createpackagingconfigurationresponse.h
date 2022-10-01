// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPACKAGINGCONFIGURATIONRESPONSE_H
#define QTAWS_CREATEPACKAGINGCONFIGURATIONRESPONSE_H

#include "mediapackagevodresponse.h"
#include "createpackagingconfigurationrequest.h"

namespace QtAws {
namespace MediaPackageVod {

class CreatePackagingConfigurationResponsePrivate;

class QTAWSMEDIAPACKAGEVOD_EXPORT CreatePackagingConfigurationResponse : public MediaPackageVodResponse {
    Q_OBJECT

public:
    CreatePackagingConfigurationResponse(const CreatePackagingConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePackagingConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePackagingConfigurationResponse)
    Q_DISABLE_COPY(CreatePackagingConfigurationResponse)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
