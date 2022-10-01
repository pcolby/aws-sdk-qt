// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTREAMRESPONSE_H
#define QTAWS_GETSTREAMRESPONSE_H

#include "ivsresponse.h"
#include "getstreamrequest.h"

namespace QtAws {
namespace Ivs {

class GetStreamResponsePrivate;

class QTAWSIVS_EXPORT GetStreamResponse : public IvsResponse {
    Q_OBJECT

public:
    GetStreamResponse(const GetStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStreamResponse)
    Q_DISABLE_COPY(GetStreamResponse)

};

} // namespace Ivs
} // namespace QtAws

#endif
