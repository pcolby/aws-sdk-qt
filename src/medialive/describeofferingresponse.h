// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOFFERINGRESPONSE_H
#define QTAWS_DESCRIBEOFFERINGRESPONSE_H

#include "medialiveresponse.h"
#include "describeofferingrequest.h"

namespace QtAws {
namespace MediaLive {

class DescribeOfferingResponsePrivate;

class QTAWSMEDIALIVE_EXPORT DescribeOfferingResponse : public MediaLiveResponse {
    Q_OBJECT

public:
    DescribeOfferingResponse(const DescribeOfferingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeOfferingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOfferingResponse)
    Q_DISABLE_COPY(DescribeOfferingResponse)

};

} // namespace MediaLive
} // namespace QtAws

#endif
