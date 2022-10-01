// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTAINERSERVICEREQUEST_H
#define QTAWS_DELETECONTAINERSERVICEREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteContainerServiceRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT DeleteContainerServiceRequest : public LightsailRequest {

public:
    DeleteContainerServiceRequest(const DeleteContainerServiceRequest &other);
    DeleteContainerServiceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteContainerServiceRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
