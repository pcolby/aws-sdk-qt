// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHAPPVERSIONREQUEST_H
#define QTAWS_PUBLISHAPPVERSIONREQUEST_H

#include "resiliencehubrequest.h"

namespace QtAws {
namespace ResilienceHub {

class PublishAppVersionRequestPrivate;

class QTAWSRESILIENCEHUB_EXPORT PublishAppVersionRequest : public ResilienceHubRequest {

public:
    PublishAppVersionRequest(const PublishAppVersionRequest &other);
    PublishAppVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PublishAppVersionRequest)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
