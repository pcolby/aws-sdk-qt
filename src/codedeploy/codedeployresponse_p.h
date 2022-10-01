// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODEDEPLOYRESPONSE_P_H
#define QTAWS_CODEDEPLOYRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class CodeDeployResponse;

class CodeDeployResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit CodeDeployResponsePrivate(CodeDeployResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CodeDeployResponse)
    Q_DISABLE_COPY(CodeDeployResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
