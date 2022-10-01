// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONREVISIONSRESPONSE_H
#define QTAWS_LISTAPPLICATIONREVISIONSRESPONSE_H

#include "codedeployresponse.h"
#include "listapplicationrevisionsrequest.h"

namespace QtAws {
namespace CodeDeploy {

class ListApplicationRevisionsResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT ListApplicationRevisionsResponse : public CodeDeployResponse {
    Q_OBJECT

public:
    ListApplicationRevisionsResponse(const ListApplicationRevisionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListApplicationRevisionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListApplicationRevisionsResponse)
    Q_DISABLE_COPY(ListApplicationRevisionsResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
