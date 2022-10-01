// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONVERSIONSRESPONSE_H
#define QTAWS_LISTAPPLICATIONVERSIONSRESPONSE_H

#include "m2response.h"
#include "listapplicationversionsrequest.h"

namespace QtAws {
namespace M2 {

class ListApplicationVersionsResponsePrivate;

class QTAWSM2_EXPORT ListApplicationVersionsResponse : public M2Response {
    Q_OBJECT

public:
    ListApplicationVersionsResponse(const ListApplicationVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListApplicationVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListApplicationVersionsResponse)
    Q_DISABLE_COPY(ListApplicationVersionsResponse)

};

} // namespace M2
} // namespace QtAws

#endif
