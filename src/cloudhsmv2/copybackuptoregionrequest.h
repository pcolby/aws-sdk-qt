// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYBACKUPTOREGIONREQUEST_H
#define QTAWS_COPYBACKUPTOREGIONREQUEST_H

#include "cloudhsmv2request.h"

namespace QtAws {
namespace CloudHsmV2 {

class CopyBackupToRegionRequestPrivate;

class QTAWSCLOUDHSMV2_EXPORT CopyBackupToRegionRequest : public CloudHsmV2Request {

public:
    CopyBackupToRegionRequest(const CopyBackupToRegionRequest &other);
    CopyBackupToRegionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CopyBackupToRegionRequest)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
