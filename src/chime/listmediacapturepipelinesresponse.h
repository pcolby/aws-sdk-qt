// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEDIACAPTUREPIPELINESRESPONSE_H
#define QTAWS_LISTMEDIACAPTUREPIPELINESRESPONSE_H

#include "chimeresponse.h"
#include "listmediacapturepipelinesrequest.h"

namespace QtAws {
namespace Chime {

class ListMediaCapturePipelinesResponsePrivate;

class QTAWSCHIME_EXPORT ListMediaCapturePipelinesResponse : public ChimeResponse {
    Q_OBJECT

public:
    ListMediaCapturePipelinesResponse(const ListMediaCapturePipelinesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMediaCapturePipelinesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMediaCapturePipelinesResponse)
    Q_DISABLE_COPY(ListMediaCapturePipelinesResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
