// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIGURELOGSRESPONSE_H
#define QTAWS_CONFIGURELOGSRESPONSE_H

#include "mediapackagevodresponse.h"
#include "configurelogsrequest.h"

namespace QtAws {
namespace MediaPackageVod {

class ConfigureLogsResponsePrivate;

class QTAWSMEDIAPACKAGEVOD_EXPORT ConfigureLogsResponse : public MediaPackageVodResponse {
    Q_OBJECT

public:
    ConfigureLogsResponse(const ConfigureLogsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ConfigureLogsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConfigureLogsResponse)
    Q_DISABLE_COPY(ConfigureLogsResponse)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
