// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPLICATIONCONFIGURATIONREQUEST_H
#define QTAWS_UPDATEREPLICATIONCONFIGURATIONREQUEST_H

#include "drsrequest.h"

namespace QtAws {
namespace Drs {

class UpdateReplicationConfigurationRequestPrivate;

class QTAWSDRS_EXPORT UpdateReplicationConfigurationRequest : public DrsRequest {

public:
    UpdateReplicationConfigurationRequest(const UpdateReplicationConfigurationRequest &other);
    UpdateReplicationConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateReplicationConfigurationRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
