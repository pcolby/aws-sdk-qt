// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETSRESPONSE_H
#define QTAWS_DESCRIBEFLEETSRESPONSE_H

#include "appstreamresponse.h"
#include "describefleetsrequest.h"

namespace QtAws {
namespace AppStream {

class DescribeFleetsResponsePrivate;

class QTAWSAPPSTREAM_EXPORT DescribeFleetsResponse : public AppStreamResponse {
    Q_OBJECT

public:
    DescribeFleetsResponse(const DescribeFleetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFleetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFleetsResponse)
    Q_DISABLE_COPY(DescribeFleetsResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
