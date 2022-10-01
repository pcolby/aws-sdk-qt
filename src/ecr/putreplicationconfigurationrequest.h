// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREPLICATIONCONFIGURATIONREQUEST_H
#define QTAWS_PUTREPLICATIONCONFIGURATIONREQUEST_H

#include "ecrrequest.h"

namespace QtAws {
namespace Ecr {

class PutReplicationConfigurationRequestPrivate;

class QTAWSECR_EXPORT PutReplicationConfigurationRequest : public EcrRequest {

public:
    PutReplicationConfigurationRequest(const PutReplicationConfigurationRequest &other);
    PutReplicationConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutReplicationConfigurationRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
