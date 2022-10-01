// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTACKREQUEST_H
#define QTAWS_UPDATESTACKREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class UpdateStackRequestPrivate;

class QTAWSOPSWORKS_EXPORT UpdateStackRequest : public OpsWorksRequest {

public:
    UpdateStackRequest(const UpdateStackRequest &other);
    UpdateStackRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateStackRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
