// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIPMEDIAAPPLICATIONSRESPONSE_H
#define QTAWS_LISTSIPMEDIAAPPLICATIONSRESPONSE_H

#include "chimeresponse.h"
#include "listsipmediaapplicationsrequest.h"

namespace QtAws {
namespace Chime {

class ListSipMediaApplicationsResponsePrivate;

class QTAWSCHIME_EXPORT ListSipMediaApplicationsResponse : public ChimeResponse {
    Q_OBJECT

public:
    ListSipMediaApplicationsResponse(const ListSipMediaApplicationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSipMediaApplicationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSipMediaApplicationsResponse)
    Q_DISABLE_COPY(ListSipMediaApplicationsResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
