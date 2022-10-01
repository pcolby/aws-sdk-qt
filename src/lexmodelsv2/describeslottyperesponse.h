// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESLOTTYPERESPONSE_H
#define QTAWS_DESCRIBESLOTTYPERESPONSE_H

#include "lexmodelsv2response.h"
#include "describeslottyperequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeSlotTypeResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT DescribeSlotTypeResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    DescribeSlotTypeResponse(const DescribeSlotTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSlotTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSlotTypeResponse)
    Q_DISABLE_COPY(DescribeSlotTypeResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
