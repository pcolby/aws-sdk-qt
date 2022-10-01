// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOUTPOSTSRESPONSE_H
#define QTAWS_LISTOUTPOSTSRESPONSE_H

#include "outpostsresponse.h"
#include "listoutpostsrequest.h"

namespace QtAws {
namespace Outposts {

class ListOutpostsResponsePrivate;

class QTAWSOUTPOSTS_EXPORT ListOutpostsResponse : public OutpostsResponse {
    Q_OBJECT

public:
    ListOutpostsResponse(const ListOutpostsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListOutpostsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOutpostsResponse)
    Q_DISABLE_COPY(ListOutpostsResponse)

};

} // namespace Outposts
} // namespace QtAws

#endif
