// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTREAMINGIMAGESRESPONSE_H
#define QTAWS_LISTSTREAMINGIMAGESRESPONSE_H

#include "nimbleresponse.h"
#include "liststreamingimagesrequest.h"

namespace QtAws {
namespace Nimble {

class ListStreamingImagesResponsePrivate;

class QTAWSNIMBLE_EXPORT ListStreamingImagesResponse : public NimbleResponse {
    Q_OBJECT

public:
    ListStreamingImagesResponse(const ListStreamingImagesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListStreamingImagesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStreamingImagesResponse)
    Q_DISABLE_COPY(ListStreamingImagesResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
