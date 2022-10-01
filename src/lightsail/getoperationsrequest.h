// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOPERATIONSREQUEST_H
#define QTAWS_GETOPERATIONSREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetOperationsRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetOperationsRequest : public LightsailRequest {

public:
    GetOperationsRequest(const GetOperationsRequest &other);
    GetOperationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOperationsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
