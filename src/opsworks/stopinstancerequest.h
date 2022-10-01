// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPINSTANCEREQUEST_H
#define QTAWS_STOPINSTANCEREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class StopInstanceRequestPrivate;

class QTAWSOPSWORKS_EXPORT StopInstanceRequest : public OpsWorksRequest {

public:
    StopInstanceRequest(const StopInstanceRequest &other);
    StopInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopInstanceRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
