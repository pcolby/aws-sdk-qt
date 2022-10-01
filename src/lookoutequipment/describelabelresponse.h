// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELABELRESPONSE_H
#define QTAWS_DESCRIBELABELRESPONSE_H

#include "lookoutequipmentresponse.h"
#include "describelabelrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class DescribeLabelResponsePrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT DescribeLabelResponse : public LookoutEquipmentResponse {
    Q_OBJECT

public:
    DescribeLabelResponse(const DescribeLabelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLabelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLabelResponse)
    Q_DISABLE_COPY(DescribeLabelResponse)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
