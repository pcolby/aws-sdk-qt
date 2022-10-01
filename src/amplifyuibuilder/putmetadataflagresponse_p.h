// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMETADATAFLAGRESPONSE_P_H
#define QTAWS_PUTMETADATAFLAGRESPONSE_P_H

#include "amplifyuibuilderresponse_p.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class PutMetadataFlagResponse;

class PutMetadataFlagResponsePrivate : public AmplifyUIBuilderResponsePrivate {

public:

    explicit PutMetadataFlagResponsePrivate(PutMetadataFlagResponse * const q);

    void parsePutMetadataFlagResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutMetadataFlagResponse)
    Q_DISABLE_COPY(PutMetadataFlagResponsePrivate)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
