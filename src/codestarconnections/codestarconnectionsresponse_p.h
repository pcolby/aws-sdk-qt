// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODESTARCONNECTIONSRESPONSE_P_H
#define QTAWS_CODESTARCONNECTIONSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace CodeStarconnections {

class CodeStarconnectionsResponse;

class CodeStarconnectionsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit CodeStarconnectionsResponsePrivate(CodeStarconnectionsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CodeStarconnectionsResponse)
    Q_DISABLE_COPY(CodeStarconnectionsResponsePrivate)

};

} // namespace CodeStarconnections
} // namespace QtAws

#endif
