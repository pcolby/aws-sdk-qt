// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTUDIORESPONSE_H
#define QTAWS_GETSTUDIORESPONSE_H

#include "nimbleresponse.h"
#include "getstudiorequest.h"

namespace QtAws {
namespace Nimble {

class GetStudioResponsePrivate;

class QTAWSNIMBLE_EXPORT GetStudioResponse : public NimbleResponse {
    Q_OBJECT

public:
    GetStudioResponse(const GetStudioRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetStudioRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStudioResponse)
    Q_DISABLE_COPY(GetStudioResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
