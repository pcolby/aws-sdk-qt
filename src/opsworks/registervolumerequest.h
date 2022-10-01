// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERVOLUMEREQUEST_H
#define QTAWS_REGISTERVOLUMEREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class RegisterVolumeRequestPrivate;

class QTAWSOPSWORKS_EXPORT RegisterVolumeRequest : public OpsWorksRequest {

public:
    RegisterVolumeRequest(const RegisterVolumeRequest &other);
    RegisterVolumeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterVolumeRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
