// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPACKAGEVERSIONSRESPONSE_H
#define QTAWS_DELETEPACKAGEVERSIONSRESPONSE_H

#include "codeartifactresponse.h"
#include "deletepackageversionsrequest.h"

namespace QtAws {
namespace CodeArtifact {

class DeletePackageVersionsResponsePrivate;

class QTAWSCODEARTIFACT_EXPORT DeletePackageVersionsResponse : public CodeArtifactResponse {
    Q_OBJECT

public:
    DeletePackageVersionsResponse(const DeletePackageVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePackageVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePackageVersionsResponse)
    Q_DISABLE_COPY(DeletePackageVersionsResponse)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
