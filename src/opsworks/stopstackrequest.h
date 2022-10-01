// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSTACKREQUEST_H
#define QTAWS_STOPSTACKREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class StopStackRequestPrivate;

class QTAWSOPSWORKS_EXPORT StopStackRequest : public OpsWorksRequest {

public:
    StopStackRequest(const StopStackRequest &other);
    StopStackRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopStackRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
