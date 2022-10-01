// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHOSTRESPONSE_H
#define QTAWS_CREATEHOSTRESPONSE_H

#include "codestarconnectionsresponse.h"
#include "createhostrequest.h"

namespace QtAws {
namespace CodeStarconnections {

class CreateHostResponsePrivate;

class QTAWSCODESTARCONNECTIONS_EXPORT CreateHostResponse : public CodeStarconnectionsResponse {
    Q_OBJECT

public:
    CreateHostResponse(const CreateHostRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateHostRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateHostResponse)
    Q_DISABLE_COPY(CreateHostResponse)

};

} // namespace CodeStarconnections
} // namespace QtAws

#endif
