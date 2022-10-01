// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOUTPOSTRESPONSE_H
#define QTAWS_GETOUTPOSTRESPONSE_H

#include "outpostsresponse.h"
#include "getoutpostrequest.h"

namespace QtAws {
namespace Outposts {

class GetOutpostResponsePrivate;

class QTAWSOUTPOSTS_EXPORT GetOutpostResponse : public OutpostsResponse {
    Q_OBJECT

public:
    GetOutpostResponse(const GetOutpostRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetOutpostRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOutpostResponse)
    Q_DISABLE_COPY(GetOutpostResponse)

};

} // namespace Outposts
} // namespace QtAws

#endif
