// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPLICATIONCONFIGURATIONREQUEST_H
#define QTAWS_GETREPLICATIONCONFIGURATIONREQUEST_H

#include "drsrequest.h"

namespace QtAws {
namespace Drs {

class GetReplicationConfigurationRequestPrivate;

class QTAWSDRS_EXPORT GetReplicationConfigurationRequest : public DrsRequest {

public:
    GetReplicationConfigurationRequest(const GetReplicationConfigurationRequest &other);
    GetReplicationConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetReplicationConfigurationRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
