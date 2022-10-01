// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSTACKREQUEST_H
#define QTAWS_STARTSTACKREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class StartStackRequestPrivate;

class QTAWSOPSWORKS_EXPORT StartStackRequest : public OpsWorksRequest {

public:
    StartStackRequest(const StartStackRequest &other);
    StartStackRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartStackRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
