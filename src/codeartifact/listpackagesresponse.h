// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPACKAGESRESPONSE_H
#define QTAWS_LISTPACKAGESRESPONSE_H

#include "codeartifactresponse.h"
#include "listpackagesrequest.h"

namespace QtAws {
namespace CodeArtifact {

class ListPackagesResponsePrivate;

class QTAWSCODEARTIFACT_EXPORT ListPackagesResponse : public CodeArtifactResponse {
    Q_OBJECT

public:
    ListPackagesResponse(const ListPackagesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPackagesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPackagesResponse)
    Q_DISABLE_COPY(ListPackagesResponse)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
