// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVODSOURCESRESPONSE_H
#define QTAWS_LISTVODSOURCESRESPONSE_H

#include "mediatailorresponse.h"
#include "listvodsourcesrequest.h"

namespace QtAws {
namespace MediaTailor {

class ListVodSourcesResponsePrivate;

class QTAWSMEDIATAILOR_EXPORT ListVodSourcesResponse : public MediaTailorResponse {
    Q_OBJECT

public:
    ListVodSourcesResponse(const ListVodSourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListVodSourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVodSourcesResponse)
    Q_DISABLE_COPY(ListVodSourcesResponse)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
