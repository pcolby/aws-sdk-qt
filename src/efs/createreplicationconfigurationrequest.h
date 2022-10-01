// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPLICATIONCONFIGURATIONREQUEST_H
#define QTAWS_CREATEREPLICATIONCONFIGURATIONREQUEST_H

#include "efsrequest.h"

namespace QtAws {
namespace Efs {

class CreateReplicationConfigurationRequestPrivate;

class QTAWSEFS_EXPORT CreateReplicationConfigurationRequest : public EfsRequest {

public:
    CreateReplicationConfigurationRequest(const CreateReplicationConfigurationRequest &other);
    CreateReplicationConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateReplicationConfigurationRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
