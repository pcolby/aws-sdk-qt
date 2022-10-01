// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACTIVENAMESRESPONSE_H
#define QTAWS_GETACTIVENAMESRESPONSE_H

#include "lightsailresponse.h"
#include "getactivenamesrequest.h"

namespace QtAws {
namespace Lightsail {

class GetActiveNamesResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetActiveNamesResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetActiveNamesResponse(const GetActiveNamesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetActiveNamesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetActiveNamesResponse)
    Q_DISABLE_COPY(GetActiveNamesResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
