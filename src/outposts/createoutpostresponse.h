// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOUTPOSTRESPONSE_H
#define QTAWS_CREATEOUTPOSTRESPONSE_H

#include "outpostsresponse.h"
#include "createoutpostrequest.h"

namespace QtAws {
namespace Outposts {

class CreateOutpostResponsePrivate;

class QTAWSOUTPOSTS_EXPORT CreateOutpostResponse : public OutpostsResponse {
    Q_OBJECT

public:
    CreateOutpostResponse(const CreateOutpostRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateOutpostRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateOutpostResponse)
    Q_DISABLE_COPY(CreateOutpostResponse)

};

} // namespace Outposts
} // namespace QtAws

#endif
