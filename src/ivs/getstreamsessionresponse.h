// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTREAMSESSIONRESPONSE_H
#define QTAWS_GETSTREAMSESSIONRESPONSE_H

#include "ivsresponse.h"
#include "getstreamsessionrequest.h"

namespace QtAws {
namespace Ivs {

class GetStreamSessionResponsePrivate;

class QTAWSIVS_EXPORT GetStreamSessionResponse : public IvsResponse {
    Q_OBJECT

public:
    GetStreamSessionResponse(const GetStreamSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetStreamSessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStreamSessionResponse)
    Q_DISABLE_COPY(GetStreamSessionResponse)

};

} // namespace Ivs
} // namespace QtAws

#endif
