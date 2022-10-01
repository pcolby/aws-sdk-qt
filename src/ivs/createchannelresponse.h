// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHANNELRESPONSE_H
#define QTAWS_CREATECHANNELRESPONSE_H

#include "ivsresponse.h"
#include "createchannelrequest.h"

namespace QtAws {
namespace Ivs {

class CreateChannelResponsePrivate;

class QTAWSIVS_EXPORT CreateChannelResponse : public IvsResponse {
    Q_OBJECT

public:
    CreateChannelResponse(const CreateChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateChannelResponse)
    Q_DISABLE_COPY(CreateChannelResponse)

};

} // namespace Ivs
} // namespace QtAws

#endif
