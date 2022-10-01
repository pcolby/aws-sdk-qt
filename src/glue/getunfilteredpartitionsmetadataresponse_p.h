// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUNFILTEREDPARTITIONSMETADATARESPONSE_P_H
#define QTAWS_GETUNFILTEREDPARTITIONSMETADATARESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetUnfilteredPartitionsMetadataResponse;

class GetUnfilteredPartitionsMetadataResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetUnfilteredPartitionsMetadataResponsePrivate(GetUnfilteredPartitionsMetadataResponse * const q);

    void parseGetUnfilteredPartitionsMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetUnfilteredPartitionsMetadataResponse)
    Q_DISABLE_COPY(GetUnfilteredPartitionsMetadataResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
