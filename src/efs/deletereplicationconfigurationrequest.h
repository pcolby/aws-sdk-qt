// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPLICATIONCONFIGURATIONREQUEST_H
#define QTAWS_DELETEREPLICATIONCONFIGURATIONREQUEST_H

#include "efsrequest.h"

namespace QtAws {
namespace Efs {

class DeleteReplicationConfigurationRequestPrivate;

class QTAWSEFS_EXPORT DeleteReplicationConfigurationRequest : public EfsRequest {

public:
    DeleteReplicationConfigurationRequest(const DeleteReplicationConfigurationRequest &other);
    DeleteReplicationConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteReplicationConfigurationRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
