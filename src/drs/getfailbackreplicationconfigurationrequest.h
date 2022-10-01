// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFAILBACKREPLICATIONCONFIGURATIONREQUEST_H
#define QTAWS_GETFAILBACKREPLICATIONCONFIGURATIONREQUEST_H

#include "drsrequest.h"

namespace QtAws {
namespace Drs {

class GetFailbackReplicationConfigurationRequestPrivate;

class QTAWSDRS_EXPORT GetFailbackReplicationConfigurationRequest : public DrsRequest {

public:
    GetFailbackReplicationConfigurationRequest(const GetFailbackReplicationConfigurationRequest &other);
    GetFailbackReplicationConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFailbackReplicationConfigurationRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
