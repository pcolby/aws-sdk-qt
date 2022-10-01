// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRETIRABLEGRANTSRESPONSE_H
#define QTAWS_LISTRETIRABLEGRANTSRESPONSE_H

#include "kmsresponse.h"
#include "listretirablegrantsrequest.h"

namespace QtAws {
namespace Kms {

class ListRetirableGrantsResponsePrivate;

class QTAWSKMS_EXPORT ListRetirableGrantsResponse : public KmsResponse {
    Q_OBJECT

public:
    ListRetirableGrantsResponse(const ListRetirableGrantsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRetirableGrantsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRetirableGrantsResponse)
    Q_DISABLE_COPY(ListRetirableGrantsResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
