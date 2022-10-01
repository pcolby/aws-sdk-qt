// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLUNACLIENTSRESPONSE_H
#define QTAWS_LISTLUNACLIENTSRESPONSE_H

#include "cloudhsmresponse.h"
#include "listlunaclientsrequest.h"

namespace QtAws {
namespace CloudHsm {

class ListLunaClientsResponsePrivate;

class QTAWSCLOUDHSM_EXPORT ListLunaClientsResponse : public CloudHsmResponse {
    Q_OBJECT

public:
    ListLunaClientsResponse(const ListLunaClientsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLunaClientsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLunaClientsResponse)
    Q_DISABLE_COPY(ListLunaClientsResponse)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
