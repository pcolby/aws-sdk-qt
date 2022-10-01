// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNODEFROMTEMPLATEJOBSREQUEST_H
#define QTAWS_LISTNODEFROMTEMPLATEJOBSREQUEST_H

#include "panoramarequest.h"

namespace QtAws {
namespace Panorama {

class ListNodeFromTemplateJobsRequestPrivate;

class QTAWSPANORAMA_EXPORT ListNodeFromTemplateJobsRequest : public PanoramaRequest {

public:
    ListNodeFromTemplateJobsRequest(const ListNodeFromTemplateJobsRequest &other);
    ListNodeFromTemplateJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListNodeFromTemplateJobsRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
