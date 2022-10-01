// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OPENSEARCHRESPONSE_P_H
#define QTAWS_OPENSEARCHRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace OpenSearch {

class OpenSearchResponse;

class OpenSearchResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit OpenSearchResponsePrivate(OpenSearchResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(OpenSearchResponse)
    Q_DISABLE_COPY(OpenSearchResponsePrivate)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
