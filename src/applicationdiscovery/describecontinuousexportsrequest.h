// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTINUOUSEXPORTSREQUEST_H
#define QTAWS_DESCRIBECONTINUOUSEXPORTSREQUEST_H

#include "applicationdiscoveryrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class DescribeContinuousExportsRequestPrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT DescribeContinuousExportsRequest : public ApplicationDiscoveryRequest {

public:
    DescribeContinuousExportsRequest(const DescribeContinuousExportsRequest &other);
    DescribeContinuousExportsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeContinuousExportsRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
