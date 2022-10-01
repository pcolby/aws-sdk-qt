// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSLOTSRESPONSE_H
#define QTAWS_LISTSLOTSRESPONSE_H

#include "lexmodelsv2response.h"
#include "listslotsrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class ListSlotsResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT ListSlotsResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    ListSlotsResponse(const ListSlotsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSlotsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSlotsResponse)
    Q_DISABLE_COPY(ListSlotsResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
