// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIGURELOGSREQUEST_H
#define QTAWS_CONFIGURELOGSREQUEST_H

#include "mediapackagerequest.h"

namespace QtAws {
namespace MediaPackage {

class ConfigureLogsRequestPrivate;

class QTAWSMEDIAPACKAGE_EXPORT ConfigureLogsRequest : public MediaPackageRequest {

public:
    ConfigureLogsRequest(const ConfigureLogsRequest &other);
    ConfigureLogsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConfigureLogsRequest)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
