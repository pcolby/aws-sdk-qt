// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSISTANTASSOCIATIONSRESPONSE_H
#define QTAWS_LISTASSISTANTASSOCIATIONSRESPONSE_H

#include "wisdomresponse.h"
#include "listassistantassociationsrequest.h"

namespace QtAws {
namespace Wisdom {

class ListAssistantAssociationsResponsePrivate;

class QTAWSWISDOM_EXPORT ListAssistantAssociationsResponse : public WisdomResponse {
    Q_OBJECT

public:
    ListAssistantAssociationsResponse(const ListAssistantAssociationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAssistantAssociationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssistantAssociationsResponse)
    Q_DISABLE_COPY(ListAssistantAssociationsResponse)

};

} // namespace Wisdom
} // namespace QtAws

#endif
