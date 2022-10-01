// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDSEARCHRESPONSE_P_H
#define QTAWS_CLOUDSEARCHRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace CloudSearch {

class CloudSearchResponse;

class CloudSearchResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit CloudSearchResponsePrivate(CloudSearchResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CloudSearchResponse)
    Q_DISABLE_COPY(CloudSearchResponsePrivate)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
