// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETSREQUEST_H
#define QTAWS_GETBUCKETSREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetBucketsRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetBucketsRequest : public LightsailRequest {

public:
    GetBucketsRequest(const GetBucketsRequest &other);
    GetBucketsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
