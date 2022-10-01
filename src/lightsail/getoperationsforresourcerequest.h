// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPERATIONSFORRESOURCEREQUEST_H
#define QTAWS_GETOPERATIONSFORRESOURCEREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetOperationsForResourceRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetOperationsForResourceRequest : public LightsailRequest {

public:
    GetOperationsForResourceRequest(const GetOperationsForResourceRequest &other);
    GetOperationsForResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOperationsForResourceRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
