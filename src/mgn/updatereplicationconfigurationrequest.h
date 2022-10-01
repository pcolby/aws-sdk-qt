// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPLICATIONCONFIGURATIONREQUEST_H
#define QTAWS_UPDATEREPLICATIONCONFIGURATIONREQUEST_H

#include "mgnrequest.h"

namespace QtAws {
namespace Mgn {

class UpdateReplicationConfigurationRequestPrivate;

class QTAWSMGN_EXPORT UpdateReplicationConfigurationRequest : public MgnRequest {

public:
    UpdateReplicationConfigurationRequest(const UpdateReplicationConfigurationRequest &other);
    UpdateReplicationConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateReplicationConfigurationRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
