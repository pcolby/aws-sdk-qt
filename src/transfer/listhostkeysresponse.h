// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHOSTKEYSRESPONSE_H
#define QTAWS_LISTHOSTKEYSRESPONSE_H

#include "transferresponse.h"
#include "listhostkeysrequest.h"

namespace QtAws {
namespace Transfer {

class ListHostKeysResponsePrivate;

class QTAWSTRANSFER_EXPORT ListHostKeysResponse : public TransferResponse {
    Q_OBJECT

public:
    ListHostKeysResponse(const ListHostKeysRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListHostKeysRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListHostKeysResponse)
    Q_DISABLE_COPY(ListHostKeysResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
