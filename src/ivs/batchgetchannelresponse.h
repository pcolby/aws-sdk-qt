// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETCHANNELRESPONSE_H
#define QTAWS_BATCHGETCHANNELRESPONSE_H

#include "ivsresponse.h"
#include "batchgetchannelrequest.h"

namespace QtAws {
namespace Ivs {

class BatchGetChannelResponsePrivate;

class QTAWSIVS_EXPORT BatchGetChannelResponse : public IvsResponse {
    Q_OBJECT

public:
    BatchGetChannelResponse(const BatchGetChannelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetChannelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetChannelResponse)
    Q_DISABLE_COPY(BatchGetChannelResponse)

};

} // namespace Ivs
} // namespace QtAws

#endif
