// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERAPPLICATIONREVISIONRESPONSE_H
#define QTAWS_REGISTERAPPLICATIONREVISIONRESPONSE_H

#include "codedeployresponse.h"
#include "registerapplicationrevisionrequest.h"

namespace QtAws {
namespace CodeDeploy {

class RegisterApplicationRevisionResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT RegisterApplicationRevisionResponse : public CodeDeployResponse {
    Q_OBJECT

public:
    RegisterApplicationRevisionResponse(const RegisterApplicationRevisionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterApplicationRevisionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterApplicationRevisionResponse)
    Q_DISABLE_COPY(RegisterApplicationRevisionResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
