// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPACKAGEVERSIONSRESPONSE_H
#define QTAWS_LISTPACKAGEVERSIONSRESPONSE_H

#include "codeartifactresponse.h"
#include "listpackageversionsrequest.h"

namespace QtAws {
namespace CodeArtifact {

class ListPackageVersionsResponsePrivate;

class QTAWSCODEARTIFACT_EXPORT ListPackageVersionsResponse : public CodeArtifactResponse {
    Q_OBJECT

public:
    ListPackageVersionsResponse(const ListPackageVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPackageVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPackageVersionsResponse)
    Q_DISABLE_COPY(ListPackageVersionsResponse)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
