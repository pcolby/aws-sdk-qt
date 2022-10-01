// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTIMAGESCANNINGCONFIGURATIONREQUEST_H
#define QTAWS_PUTIMAGESCANNINGCONFIGURATIONREQUEST_H

#include "ecrrequest.h"

namespace QtAws {
namespace Ecr {

class PutImageScanningConfigurationRequestPrivate;

class QTAWSECR_EXPORT PutImageScanningConfigurationRequest : public EcrRequest {

public:
    PutImageScanningConfigurationRequest(const PutImageScanningConfigurationRequest &other);
    PutImageScanningConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutImageScanningConfigurationRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
