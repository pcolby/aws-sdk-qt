// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOVERAGERESPONSE_H
#define QTAWS_LISTCOVERAGERESPONSE_H

#include "inspector2response.h"
#include "listcoveragerequest.h"

namespace QtAws {
namespace Inspector2 {

class ListCoverageResponsePrivate;

class QTAWSINSPECTOR2_EXPORT ListCoverageResponse : public Inspector2Response {
    Q_OBJECT

public:
    ListCoverageResponse(const ListCoverageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCoverageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCoverageResponse)
    Q_DISABLE_COPY(ListCoverageResponse)

};

} // namespace Inspector2
} // namespace QtAws

#endif
