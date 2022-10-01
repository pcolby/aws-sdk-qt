// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPERATIONREQUEST_H
#define QTAWS_GETOPERATIONREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetOperationRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetOperationRequest : public LightsailRequest {

public:
    GetOperationRequest(const GetOperationRequest &other);
    GetOperationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOperationRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
