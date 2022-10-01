// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCESHARESRESPONSE_H
#define QTAWS_GETRESOURCESHARESRESPONSE_H

#include "ramresponse.h"
#include "getresourcesharesrequest.h"

namespace QtAws {
namespace Ram {

class GetResourceSharesResponsePrivate;

class QTAWSRAM_EXPORT GetResourceSharesResponse : public RamResponse {
    Q_OBJECT

public:
    GetResourceSharesResponse(const GetResourceSharesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetResourceSharesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourceSharesResponse)
    Q_DISABLE_COPY(GetResourceSharesResponse)

};

} // namespace Ram
} // namespace QtAws

#endif
