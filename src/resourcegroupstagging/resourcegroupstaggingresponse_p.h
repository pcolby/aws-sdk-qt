// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESOURCEGROUPSTAGGINGRESPONSE_P_H
#define QTAWS_RESOURCEGROUPSTAGGINGRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace ResourceGroupsTagging {

class ResourceGroupsTaggingResponse;

class ResourceGroupsTaggingResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ResourceGroupsTaggingResponsePrivate(ResourceGroupsTaggingResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResourceGroupsTaggingResponse)
    Q_DISABLE_COPY(ResourceGroupsTaggingResponsePrivate)

};

} // namespace ResourceGroupsTagging
} // namespace QtAws

#endif
