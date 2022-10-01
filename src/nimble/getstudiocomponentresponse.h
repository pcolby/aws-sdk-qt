// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTUDIOCOMPONENTRESPONSE_H
#define QTAWS_GETSTUDIOCOMPONENTRESPONSE_H

#include "nimbleresponse.h"
#include "getstudiocomponentrequest.h"

namespace QtAws {
namespace Nimble {

class GetStudioComponentResponsePrivate;

class QTAWSNIMBLE_EXPORT GetStudioComponentResponse : public NimbleResponse {
    Q_OBJECT

public:
    GetStudioComponentResponse(const GetStudioComponentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetStudioComponentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStudioComponentResponse)
    Q_DISABLE_COPY(GetStudioComponentResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
