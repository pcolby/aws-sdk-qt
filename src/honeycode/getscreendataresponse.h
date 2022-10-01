// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSCREENDATARESPONSE_H
#define QTAWS_GETSCREENDATARESPONSE_H

#include "honeycoderesponse.h"
#include "getscreendatarequest.h"

namespace QtAws {
namespace Honeycode {

class GetScreenDataResponsePrivate;

class QTAWSHONEYCODE_EXPORT GetScreenDataResponse : public HoneycodeResponse {
    Q_OBJECT

public:
    GetScreenDataResponse(const GetScreenDataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetScreenDataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetScreenDataResponse)
    Q_DISABLE_COPY(GetScreenDataResponse)

};

} // namespace Honeycode
} // namespace QtAws

#endif
