// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVOLUMEREQUEST_H
#define QTAWS_UPDATEVOLUMEREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class UpdateVolumeRequestPrivate;

class QTAWSOPSWORKS_EXPORT UpdateVolumeRequest : public OpsWorksRequest {

public:
    UpdateVolumeRequest(const UpdateVolumeRequest &other);
    UpdateVolumeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateVolumeRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
