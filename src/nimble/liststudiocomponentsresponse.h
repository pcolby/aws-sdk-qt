// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTUDIOCOMPONENTSRESPONSE_H
#define QTAWS_LISTSTUDIOCOMPONENTSRESPONSE_H

#include "nimbleresponse.h"
#include "liststudiocomponentsrequest.h"

namespace QtAws {
namespace Nimble {

class ListStudioComponentsResponsePrivate;

class QTAWSNIMBLE_EXPORT ListStudioComponentsResponse : public NimbleResponse {
    Q_OBJECT

public:
    ListStudioComponentsResponse(const ListStudioComponentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListStudioComponentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStudioComponentsResponse)
    Q_DISABLE_COPY(ListStudioComponentsResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
