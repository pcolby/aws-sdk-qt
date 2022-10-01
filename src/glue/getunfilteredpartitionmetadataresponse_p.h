// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUNFILTEREDPARTITIONMETADATARESPONSE_P_H
#define QTAWS_GETUNFILTEREDPARTITIONMETADATARESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetUnfilteredPartitionMetadataResponse;

class GetUnfilteredPartitionMetadataResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetUnfilteredPartitionMetadataResponsePrivate(GetUnfilteredPartitionMetadataResponse * const q);

    void parseGetUnfilteredPartitionMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetUnfilteredPartitionMetadataResponse)
    Q_DISABLE_COPY(GetUnfilteredPartitionMetadataResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
