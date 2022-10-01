// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANNELRESPONSE_H
#define QTAWS_GETCHANNELRESPONSE_H

#include "ivsresponse.h"
#include "getchannelrequest.h"

namespace QtAws {
namespace Ivs {

class GetChannelResponsePrivate;

class QTAWSIVS_EXPORT GetChannelResponse : public IvsResponse {
    Q_OBJECT

public:
    GetChannelResponse(const GetChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetChannelResponse)
    Q_DISABLE_COPY(GetChannelResponse)

};

} // namespace Ivs
} // namespace QtAws

#endif
