// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTUDIOCOMPONENTRESPONSE_H
#define QTAWS_UPDATESTUDIOCOMPONENTRESPONSE_H

#include "nimbleresponse.h"
#include "updatestudiocomponentrequest.h"

namespace QtAws {
namespace Nimble {

class UpdateStudioComponentResponsePrivate;

class QTAWSNIMBLE_EXPORT UpdateStudioComponentResponse : public NimbleResponse {
    Q_OBJECT

public:
    UpdateStudioComponentResponse(const UpdateStudioComponentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateStudioComponentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateStudioComponentResponse)
    Q_DISABLE_COPY(UpdateStudioComponentResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
