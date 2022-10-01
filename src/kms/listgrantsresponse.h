// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGRANTSRESPONSE_H
#define QTAWS_LISTGRANTSRESPONSE_H

#include "kmsresponse.h"
#include "listgrantsrequest.h"

namespace QtAws {
namespace Kms {

class ListGrantsResponsePrivate;

class QTAWSKMS_EXPORT ListGrantsResponse : public KmsResponse {
    Q_OBJECT

public:
    ListGrantsResponse(const ListGrantsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListGrantsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGrantsResponse)
    Q_DISABLE_COPY(ListGrantsResponse)

};

} // namespace Kms
} // namespace QtAws

#endif
