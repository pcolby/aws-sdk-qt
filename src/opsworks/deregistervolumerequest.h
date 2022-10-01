// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERVOLUMEREQUEST_H
#define QTAWS_DEREGISTERVOLUMEREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class DeregisterVolumeRequestPrivate;

class QTAWSOPSWORKS_EXPORT DeregisterVolumeRequest : public OpsWorksRequest {

public:
    DeregisterVolumeRequest(const DeregisterVolumeRequest &other);
    DeregisterVolumeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterVolumeRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
