// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GRANTACCESSREQUEST_H
#define QTAWS_GRANTACCESSREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class GrantAccessRequestPrivate;

class QTAWSOPSWORKS_EXPORT GrantAccessRequest : public OpsWorksRequest {

public:
    GrantAccessRequest(const GrantAccessRequest &other);
    GrantAccessRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GrantAccessRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
