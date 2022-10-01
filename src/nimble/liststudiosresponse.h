// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTUDIOSRESPONSE_H
#define QTAWS_LISTSTUDIOSRESPONSE_H

#include "nimbleresponse.h"
#include "liststudiosrequest.h"

namespace QtAws {
namespace Nimble {

class ListStudiosResponsePrivate;

class QTAWSNIMBLE_EXPORT ListStudiosResponse : public NimbleResponse {
    Q_OBJECT

public:
    ListStudiosResponse(const ListStudiosRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListStudiosRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStudiosResponse)
    Q_DISABLE_COPY(ListStudiosResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
