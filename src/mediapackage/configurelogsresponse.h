// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIGURELOGSRESPONSE_H
#define QTAWS_CONFIGURELOGSRESPONSE_H

#include "mediapackageresponse.h"
#include "configurelogsrequest.h"

namespace QtAws {
namespace MediaPackage {

class ConfigureLogsResponsePrivate;

class QTAWSMEDIAPACKAGE_EXPORT ConfigureLogsResponse : public MediaPackageResponse {
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

} // namespace MediaPackage
} // namespace QtAws

#endif
