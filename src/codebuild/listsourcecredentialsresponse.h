// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSOURCECREDENTIALSRESPONSE_H
#define QTAWS_LISTSOURCECREDENTIALSRESPONSE_H

#include "codebuildresponse.h"
#include "listsourcecredentialsrequest.h"

namespace QtAws {
namespace CodeBuild {

class ListSourceCredentialsResponsePrivate;

class QTAWSCODEBUILD_EXPORT ListSourceCredentialsResponse : public CodeBuildResponse {
    Q_OBJECT

public:
    ListSourceCredentialsResponse(const ListSourceCredentialsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSourceCredentialsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSourceCredentialsResponse)
    Q_DISABLE_COPY(ListSourceCredentialsResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
