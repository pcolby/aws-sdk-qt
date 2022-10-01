// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTSTACKSTOSTACKSETRESPONSE_P_H
#define QTAWS_IMPORTSTACKSTOSTACKSETRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class ImportStacksToStackSetResponse;

class ImportStacksToStackSetResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit ImportStacksToStackSetResponsePrivate(ImportStacksToStackSetResponse * const q);

    void parseImportStacksToStackSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportStacksToStackSetResponse)
    Q_DISABLE_COPY(ImportStacksToStackSetResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
