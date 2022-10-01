// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESLOTRESPONSE_H
#define QTAWS_DESCRIBESLOTRESPONSE_H

#include "lexmodelsv2response.h"
#include "describeslotrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeSlotResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT DescribeSlotResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    DescribeSlotResponse(const DescribeSlotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSlotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSlotResponse)
    Q_DISABLE_COPY(DescribeSlotResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
