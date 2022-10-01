// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DOWNLOADDBLOGFILEPORTIONREQUEST_H
#define QTAWS_DOWNLOADDBLOGFILEPORTIONREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class DownloadDBLogFilePortionRequestPrivate;

class QTAWSRDS_EXPORT DownloadDBLogFilePortionRequest : public RdsRequest {

public:
    DownloadDBLogFilePortionRequest(const DownloadDBLogFilePortionRequest &other);
    DownloadDBLogFilePortionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DownloadDBLogFilePortionRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
