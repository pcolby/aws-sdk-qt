// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELBANRESPONSE_H
#define QTAWS_DESCRIBECHANNELBANRESPONSE_H

#include "chimeresponse.h"
#include "describechannelbanrequest.h"

namespace QtAws {
namespace Chime {

class DescribeChannelBanResponsePrivate;

class QTAWSCHIME_EXPORT DescribeChannelBanResponse : public ChimeResponse {
    Q_OBJECT

public:
    DescribeChannelBanResponse(const DescribeChannelBanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeChannelBanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeChannelBanResponse)
    Q_DISABLE_COPY(DescribeChannelBanResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
