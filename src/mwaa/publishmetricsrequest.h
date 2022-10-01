// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHMETRICSREQUEST_H
#define QTAWS_PUBLISHMETRICSREQUEST_H

#include "mwaarequest.h"

namespace QtAws {
namespace Mwaa {

class PublishMetricsRequestPrivate;

class QTAWSMWAA_EXPORT PublishMetricsRequest : public MwaaRequest {

public:
    PublishMetricsRequest(const PublishMetricsRequest &other);
    PublishMetricsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PublishMetricsRequest)

};

} // namespace Mwaa
} // namespace QtAws

#endif
