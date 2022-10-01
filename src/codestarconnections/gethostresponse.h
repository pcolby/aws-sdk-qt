// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHOSTRESPONSE_H
#define QTAWS_GETHOSTRESPONSE_H

#include "codestarconnectionsresponse.h"
#include "gethostrequest.h"

namespace QtAws {
namespace CodeStarconnections {

class GetHostResponsePrivate;

class QTAWSCODESTARCONNECTIONS_EXPORT GetHostResponse : public CodeStarconnectionsResponse {
    Q_OBJECT

public:
    GetHostResponse(const GetHostRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetHostRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetHostResponse)
    Q_DISABLE_COPY(GetHostResponse)

};

} // namespace CodeStarconnections
} // namespace QtAws

#endif
