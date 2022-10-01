// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCESBYEXTERNALIDRESPONSE_P_H
#define QTAWS_DELETERESOURCESBYEXTERNALIDRESPONSE_P_H

#include "codedeployresponse_p.h"

namespace QtAws {
namespace CodeDeploy {

class DeleteResourcesByExternalIdResponse;

class DeleteResourcesByExternalIdResponsePrivate : public CodeDeployResponsePrivate {

public:

    explicit DeleteResourcesByExternalIdResponsePrivate(DeleteResourcesByExternalIdResponse * const q);

    void parseDeleteResourcesByExternalIdResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteResourcesByExternalIdResponse)
    Q_DISABLE_COPY(DeleteResourcesByExternalIdResponsePrivate)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
