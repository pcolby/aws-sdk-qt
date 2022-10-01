// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREBACKUPREQUEST_H
#define QTAWS_RESTOREBACKUPREQUEST_H

#include "cloudhsmv2request.h"

namespace QtAws {
namespace CloudHsmV2 {

class RestoreBackupRequestPrivate;

class QTAWSCLOUDHSMV2_EXPORT RestoreBackupRequest : public CloudHsmV2Request {

public:
    RestoreBackupRequest(const RestoreBackupRequest &other);
    RestoreBackupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreBackupRequest)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
