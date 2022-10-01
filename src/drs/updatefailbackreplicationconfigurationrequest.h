// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFAILBACKREPLICATIONCONFIGURATIONREQUEST_H
#define QTAWS_UPDATEFAILBACKREPLICATIONCONFIGURATIONREQUEST_H

#include "drsrequest.h"

namespace QtAws {
namespace Drs {

class UpdateFailbackReplicationConfigurationRequestPrivate;

class QTAWSDRS_EXPORT UpdateFailbackReplicationConfigurationRequest : public DrsRequest {

public:
    UpdateFailbackReplicationConfigurationRequest(const UpdateFailbackReplicationConfigurationRequest &other);
    UpdateFailbackReplicationConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFailbackReplicationConfigurationRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
