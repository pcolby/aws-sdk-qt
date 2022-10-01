// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSIGNINSTANCEREQUEST_H
#define QTAWS_ASSIGNINSTANCEREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class AssignInstanceRequestPrivate;

class QTAWSOPSWORKS_EXPORT AssignInstanceRequest : public OpsWorksRequest {

public:
    AssignInstanceRequest(const AssignInstanceRequest &other);
    AssignInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssignInstanceRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
