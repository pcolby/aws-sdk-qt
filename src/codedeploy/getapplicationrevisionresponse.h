// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPLICATIONREVISIONRESPONSE_H
#define QTAWS_GETAPPLICATIONREVISIONRESPONSE_H

#include "codedeployresponse.h"
#include "getapplicationrevisionrequest.h"

namespace QtAws {
namespace CodeDeploy {

class GetApplicationRevisionResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT GetApplicationRevisionResponse : public CodeDeployResponse {
    Q_OBJECT

public:
    GetApplicationRevisionResponse(const GetApplicationRevisionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetApplicationRevisionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApplicationRevisionResponse)
    Q_DISABLE_COPY(GetApplicationRevisionResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
