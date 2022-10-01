// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINFERENCEEVENTSRESPONSE_H
#define QTAWS_LISTINFERENCEEVENTSRESPONSE_H

#include "lookoutequipmentresponse.h"
#include "listinferenceeventsrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class ListInferenceEventsResponsePrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT ListInferenceEventsResponse : public LookoutEquipmentResponse {
    Q_OBJECT

public:
    ListInferenceEventsResponse(const ListInferenceEventsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListInferenceEventsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInferenceEventsResponse)
    Q_DISABLE_COPY(ListInferenceEventsResponse)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
