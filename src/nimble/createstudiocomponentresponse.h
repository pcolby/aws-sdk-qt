// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTUDIOCOMPONENTRESPONSE_H
#define QTAWS_CREATESTUDIOCOMPONENTRESPONSE_H

#include "nimbleresponse.h"
#include "createstudiocomponentrequest.h"

namespace QtAws {
namespace Nimble {

class CreateStudioComponentResponsePrivate;

class QTAWSNIMBLE_EXPORT CreateStudioComponentResponse : public NimbleResponse {
    Q_OBJECT

public:
    CreateStudioComponentResponse(const CreateStudioComponentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateStudioComponentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStudioComponentResponse)
    Q_DISABLE_COPY(CreateStudioComponentResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
