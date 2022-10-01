// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONREVISIONSRESPONSE_P_H
#define QTAWS_LISTAPPLICATIONREVISIONSRESPONSE_P_H

#include "codedeployresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class ListApplicationRevisionsResponse;

class ListApplicationRevisionsResponsePrivate : public CodeDeployResponsePrivate {

public:

    explicit ListApplicationRevisionsResponsePrivate(ListApplicationRevisionsResponse * const q);

    void parseListApplicationRevisionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListApplicationRevisionsResponse)
    Q_DISABLE_COPY(ListApplicationRevisionsResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
