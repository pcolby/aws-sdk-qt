// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOUTPOSTRESPONSE_H
#define QTAWS_DELETEOUTPOSTRESPONSE_H

#include "outpostsresponse.h"
#include "deleteoutpostrequest.h"

namespace QtAws {
namespace Outposts {

class DeleteOutpostResponsePrivate;

class QTAWSOUTPOSTS_EXPORT DeleteOutpostResponse : public OutpostsResponse {
    Q_OBJECT

public:
    DeleteOutpostResponse(const DeleteOutpostRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteOutpostRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteOutpostResponse)
    Q_DISABLE_COPY(DeleteOutpostResponse)

};

} // namespace Outposts
} // namespace QtAws

#endif
