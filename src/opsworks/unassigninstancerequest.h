// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNASSIGNINSTANCEREQUEST_H
#define QTAWS_UNASSIGNINSTANCEREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class UnassignInstanceRequestPrivate;

class QTAWSOPSWORKS_EXPORT UnassignInstanceRequest : public OpsWorksRequest {

public:
    UnassignInstanceRequest(const UnassignInstanceRequest &other);
    UnassignInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UnassignInstanceRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
