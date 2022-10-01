// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOWNLOADURLFORLAYERREQUEST_P_H
#define QTAWS_GETDOWNLOADURLFORLAYERREQUEST_P_H

#include "ecrrequest_p.h"
#include "getdownloadurlforlayerrequest.h"

namespace QtAws {
namespace Ecr {

class GetDownloadUrlForLayerRequest;

class GetDownloadUrlForLayerRequestPrivate : public EcrRequestPrivate {

public:
    GetDownloadUrlForLayerRequestPrivate(const EcrRequest::Action action,
                                   GetDownloadUrlForLayerRequest * const q);
    GetDownloadUrlForLayerRequestPrivate(const GetDownloadUrlForLayerRequestPrivate &other,
                                   GetDownloadUrlForLayerRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDownloadUrlForLayerRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
