// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENODEFROMTEMPLATEJOBREQUEST_H
#define QTAWS_DESCRIBENODEFROMTEMPLATEJOBREQUEST_H

#include "panoramarequest.h"

namespace QtAws {
namespace Panorama {

class DescribeNodeFromTemplateJobRequestPrivate;

class QTAWSPANORAMA_EXPORT DescribeNodeFromTemplateJobRequest : public PanoramaRequest {

public:
    DescribeNodeFromTemplateJobRequest(const DescribeNodeFromTemplateJobRequest &other);
    DescribeNodeFromTemplateJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNodeFromTemplateJobRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
