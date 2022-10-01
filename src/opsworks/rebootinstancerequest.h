// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTINSTANCEREQUEST_H
#define QTAWS_REBOOTINSTANCEREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class RebootInstanceRequestPrivate;

class QTAWSOPSWORKS_EXPORT RebootInstanceRequest : public OpsWorksRequest {

public:
    RebootInstanceRequest(const RebootInstanceRequest &other);
    RebootInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RebootInstanceRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
