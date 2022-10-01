// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMETADATARESPONSE_P_H
#define QTAWS_GETMETADATARESPONSE_P_H

#include "amplifyuibuilderresponse_p.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class GetMetadataResponse;

class GetMetadataResponsePrivate : public AmplifyUIBuilderResponsePrivate {

public:

    explicit GetMetadataResponsePrivate(GetMetadataResponse * const q);

    void parseGetMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMetadataResponse)
    Q_DISABLE_COPY(GetMetadataResponsePrivate)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
