// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPACKAGEVERSIONDEPENDENCIESRESPONSE_H
#define QTAWS_LISTPACKAGEVERSIONDEPENDENCIESRESPONSE_H

#include "codeartifactresponse.h"
#include "listpackageversiondependenciesrequest.h"

namespace QtAws {
namespace CodeArtifact {

class ListPackageVersionDependenciesResponsePrivate;

class QTAWSCODEARTIFACT_EXPORT ListPackageVersionDependenciesResponse : public CodeArtifactResponse {
    Q_OBJECT

public:
    ListPackageVersionDependenciesResponse(const ListPackageVersionDependenciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPackageVersionDependenciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPackageVersionDependenciesResponse)
    Q_DISABLE_COPY(ListPackageVersionDependenciesResponse)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
