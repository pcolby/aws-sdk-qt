// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPLICATIONCONFIGURATIONREQUEST_H
#define QTAWS_GETREPLICATIONCONFIGURATIONREQUEST_H

#include "mgnrequest.h"

namespace QtAws {
namespace Mgn {

class GetReplicationConfigurationRequestPrivate;

class QTAWSMGN_EXPORT GetReplicationConfigurationRequest : public MgnRequest {

public:
    GetReplicationConfigurationRequest(const GetReplicationConfigurationRequest &other);
    GetReplicationConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetReplicationConfigurationRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
