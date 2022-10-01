// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEOUTPOSTRESPONSE_H
#define QTAWS_UPDATEOUTPOSTRESPONSE_H

#include "outpostsresponse.h"
#include "updateoutpostrequest.h"

namespace QtAws {
namespace Outposts {

class UpdateOutpostResponsePrivate;

class QTAWSOUTPOSTS_EXPORT UpdateOutpostResponse : public OutpostsResponse {
    Q_OBJECT

public:
    UpdateOutpostResponse(const UpdateOutpostRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateOutpostRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateOutpostResponse)
    Q_DISABLE_COPY(UpdateOutpostResponse)

};

} // namespace Outposts
} // namespace QtAws

#endif
