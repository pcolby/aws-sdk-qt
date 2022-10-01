// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPOSITORIESRESPONSE_H
#define QTAWS_LISTREPOSITORIESRESPONSE_H

#include "codeartifactresponse.h"
#include "listrepositoriesrequest.h"

namespace QtAws {
namespace CodeArtifact {

class ListRepositoriesResponsePrivate;

class QTAWSCODEARTIFACT_EXPORT ListRepositoriesResponse : public CodeArtifactResponse {
    Q_OBJECT

public:
    ListRepositoriesResponse(const ListRepositoriesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRepositoriesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRepositoriesResponse)
    Q_DISABLE_COPY(ListRepositoriesResponse)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
