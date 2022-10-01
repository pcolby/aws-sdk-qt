// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVODSOURCERESPONSE_H
#define QTAWS_DESCRIBEVODSOURCERESPONSE_H

#include "mediatailorresponse.h"
#include "describevodsourcerequest.h"

namespace QtAws {
namespace MediaTailor {

class DescribeVodSourceResponsePrivate;

class QTAWSMEDIATAILOR_EXPORT DescribeVodSourceResponse : public MediaTailorResponse {
    Q_OBJECT

public:
    DescribeVodSourceResponse(const DescribeVodSourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeVodSourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVodSourceResponse)
    Q_DISABLE_COPY(DescribeVodSourceResponse)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
