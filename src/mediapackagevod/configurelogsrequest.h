// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIGURELOGSREQUEST_H
#define QTAWS_CONFIGURELOGSREQUEST_H

#include "mediapackagevodrequest.h"

namespace QtAws {
namespace MediaPackageVod {

class ConfigureLogsRequestPrivate;

class QTAWSMEDIAPACKAGEVOD_EXPORT ConfigureLogsRequest : public MediaPackageVodRequest {

public:
    ConfigureLogsRequest(const ConfigureLogsRequest &other);
    ConfigureLogsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConfigureLogsRequest)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
