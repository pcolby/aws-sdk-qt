// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEDIAPIPELINESRESPONSE_H
#define QTAWS_LISTMEDIAPIPELINESRESPONSE_H

#include "chimesdkmediapipelinesresponse.h"
#include "listmediapipelinesrequest.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class ListMediaPipelinesResponsePrivate;

class QTAWSCHIMESDKMEDIAPIPELINES_EXPORT ListMediaPipelinesResponse : public ChimeSdkMediaPipelinesResponse {
    Q_OBJECT

public:
    ListMediaPipelinesResponse(const ListMediaPipelinesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMediaPipelinesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMediaPipelinesResponse)
    Q_DISABLE_COPY(ListMediaPipelinesResponse)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif
