// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENVIRONMENTEC2RESPONSE_H
#define QTAWS_CREATEENVIRONMENTEC2RESPONSE_H

#include "cloud9response.h"
#include "createenvironmentec2request.h"

namespace QtAws {
namespace Cloud9 {

class CreateEnvironmentEC2ResponsePrivate;

class QTAWSCLOUD9_EXPORT CreateEnvironmentEC2Response : public Cloud9Response {
    Q_OBJECT

public:
    CreateEnvironmentEC2Response(const CreateEnvironmentEC2Request &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateEnvironmentEC2Request * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEnvironmentEC2Response)
    Q_DISABLE_COPY(CreateEnvironmentEC2Response)

};

} // namespace Cloud9
} // namespace QtAws

#endif
