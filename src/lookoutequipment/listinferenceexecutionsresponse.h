// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINFERENCEEXECUTIONSRESPONSE_H
#define QTAWS_LISTINFERENCEEXECUTIONSRESPONSE_H

#include "lookoutequipmentresponse.h"
#include "listinferenceexecutionsrequest.h"

namespace QtAws {
namespace LookoutEquipment {

class ListInferenceExecutionsResponsePrivate;

class QTAWSLOOKOUTEQUIPMENT_EXPORT ListInferenceExecutionsResponse : public LookoutEquipmentResponse {
    Q_OBJECT

public:
    ListInferenceExecutionsResponse(const ListInferenceExecutionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListInferenceExecutionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInferenceExecutionsResponse)
    Q_DISABLE_COPY(ListInferenceExecutionsResponse)

};

} // namespace LookoutEquipment
} // namespace QtAws

#endif
