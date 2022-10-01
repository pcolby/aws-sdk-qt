// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEKEYWORDSRESPONSE_H
#define QTAWS_DESCRIBEKEYWORDSRESPONSE_H

#include "pinpointsmsvoicev2response.h"
#include "describekeywordsrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DescribeKeywordsResponsePrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DescribeKeywordsResponse : public PinpointSmsVoiceV2Response {
    Q_OBJECT

public:
    DescribeKeywordsResponse(const DescribeKeywordsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeKeywordsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeKeywordsResponse)
    Q_DISABLE_COPY(DescribeKeywordsResponse)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
